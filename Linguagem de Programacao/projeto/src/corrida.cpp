/**
* @author Ítalo Epifânio
* @file corrida.cpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/src/corrida.cpp
* @since 29/05/18
* @date 31/05/18
* @brief Implementações dos métodos da classe corrida
*/

#include "../include/readCsv.hpp"
#include "../include/corrida.hpp"
#include "../include/pista.hpp"
#include "../include/sapos.hpp"
#include <string>

// Construtores
Corrida::Corrida(){}
Corrida::~Corrida(){}

/**
* @brief Construtor que inicializa uma corrida com seu nome
* @param std::string nome
*/
Corrida::Corrida(std::string nome){
	this->nome = nome;
}

/**
* @brief Lê arquivo CSV e insere uma pista na corrida.
* @param std::string nomeArquivo
* @param std::string delimitador
*
* Esse método checa se existe uma pista cadastrada na corrida, se houver
* ele retorna uma mensagem informando que não é possível inserir outra.
* Se ainda não tiver sido cadastrada nenhuma pista, dá-se a opção do usuário
* escolher e inserir a pista
*/
void Corrida::inserirPista(std::string nomeArquivo, std::string delimitador){
	if(this->pista == 0){
		int opcao;
		unsigned i = 0,j = 0;
		Pista *pista = new Pista();

		ReadCsv leitor(nomeArquivo, delimitador);

	    std::vector<std::vector<std::string>> dataList = leitor.lerCsv();

		std::cout << "Escolha um numero de pista: " << std::endl;
		for(std::vector<std::string> vec : dataList)
		{
			std::cout << "Pista: " << (i+1) << std::endl;
			std::cout << "Nome: " << vec[0] << std::endl;
			std::cout << "Tamanho: " << vec[1] << std::endl;
			std::cout << std::endl;
			i++;
		}
		std::cin >> opcao;

		// Inserindo opção selecionada
		for(std::vector<std::string> vec : dataList)
		{
			if(j == (unsigned)(opcao-1)){
				pista->setNome(vec[0]);
				pista->setTamanho(std::stoi(vec[1]));

				this->pista = pista;
			}
			j++;
		}

		return;
	}

	std::cout << "Já existe uma pista nessa corrida"        << std::endl
			  << "não há tempo para cadastrar outra" 	    << std::endl
			  << "aos seus postos, vai ser dada a largada!" << std::endl;
}

/**
* @brief Lê arquivo CSV e cadastra sapos na corrida.
* @param std::string nomeArquivo
* @param std::string delimitador
*/
void Corrida::inserirSapos(std::string nomeArquivo, std::string delimitador){
	std::string nome, identificador;

    ReadCsv leitor(nomeArquivo, delimitador);

    std::vector<std::vector<std::string>> dataList = leitor.lerCsv();

	for(std::vector<std::string> vec : dataList)
	{
    	Sapo *sapo = new Sapo();
		sapo->setNome(vec[0]);
		sapo->setIdentificador(vec[1]);
		sapo->setForcaPulo(std::stoi(vec[2]));
		sapo->setRankingAtual(0);

		this->sapos.push_back(sapo);
	}
}

/**
* @brief Inicia competição entre os sapos
*
* Verifica se há sapos e pistas disponíveis para a corrida, caso hajam
* então inicializa-se como zero todas as distâncias percorridas anteriormente pelos sapos
* e começa-se a corrida. Enquanto todos os competidores não tiverem
* passado da linha de chegada da pista a corrida continua, atribuindo a medida
* que concluirem a prova o seu ranking.
* Ao final da corrida é exibido o ranking dos competidores
*/
void Corrida::iniciarCorrida(){
	if(this->sapos.size() <= 0){
		std::cout << "Nenhum sapo disponível para correr" << std::endl;
		return;
	}

	if(this->pista == 0){
		std::cout << "Nenhuma pista disponível para corrida" << std::endl;
		return;
	}

	// Inicializa como zero todas as distancias percorridas anterioremente pelos sapos
	for(std::size_t i = 0; i < this->sapos.size(); i++){
	    this->sapos[i]->setDistanciaPercorrida(0);
	}

    bool todosUltrapassaram = true;
	// Atualiza o ranking dos competidores a medida que ultrapassam a linha de chegada
    int ranking = 0;
    // Vê quantas provas os sapos já disputaram
    int provasDisputadas = this->sapos[0]->getQuantProvasDisputadas();

	// Enquanto nem todos tiverem ultrapassado a linha de corrida repete o evento
	while (todosUltrapassaram) {
		for(std::size_t i = 0; i < this->sapos.size(); i++){
			// Só é exibido os dados dos sapos enquanto eles não passaram a linha de chegada
			if(this->sapos[i]->getDistanciaPercorrida() <= this->pista->getTamanho()){
				this->sapos[i]->pular();
				std::cout << *(this->sapos[i]) << std::endl;
			}

			// Conta quantos sapos já concluiram a corrida na pista
			for(std::size_t i = 0; i < this->sapos.size(); i++){
				if(this->sapos[i]->getDistanciaPercorrida() > this->pista->getTamanho()){
					// Verifica se o sapo concluiu a prova em andamento
					// Caso tenha acabado de concluir, então lhe é atribuido ranking e incrementado as provasDisputadas
					if(this->sapos[i]->getQuantProvasDisputadas() == provasDisputadas){
						ranking++;

						if(ranking == 1){
							this->sapos[i]->setVitorias(this->sapos[i]->getVitorias()+1);
						}else{
							this->sapos[i]->setDerrotas(this->sapos[i]->getDerrotas()+1);
						}

						this->sapos[i]->setQuantProvasDisputadas(provasDisputadas+1);
						this->sapos[i]->setRankingAtual(ranking);
					}
				}
			}
		}
		// Se todos já tiverem passado, encerra-se a corrida
		if((unsigned) ranking == this->sapos.size()){
			todosUltrapassaram = false;
		}
	}
	// Exibe estatísticas dos sapos
	std::cout << "///////////// RANKING ///////////" << std::endl;
	exibirRanking();
}

/**
* @brief Exibe os dados dos sapos que estão cadastrados na corrida
*
* Caso nenhum sapo tenha sido cadastrado na corrida, esse método retorna
* uma mensagem avisando que nenhuma corrida foi iniciada e portanto
* não existe estatisticas a serem exibidas. Caso hajam sapos competidores
* então seus dados são exibidos.
*/
void Corrida::exibirEstatisticas(){
	if(this->sapos.size() == 0){
		std::cout << "Nenhuma corrida foi iniciada." <<
					 " Sem nenhuma estatistica"      << std::endl;
	}

	for(std::size_t i = 0; i < this->sapos.size(); i++){
		std::cout << *(this->sapos[i]) << std::endl;
	}
}

/**
* @brief Exibe o ranking dos sapos após a corrida
*/
void Corrida::exibirRanking(){
	for(std::size_t i = 0; i < this->sapos.size(); i++){
		for(std::size_t j = 0; j <= this->sapos.size(); j++){
			if(j == (unsigned) this->sapos[i]->getRankingAtual()){
				std::cout <<
				"Nome: "					     	<< this->sapos[i]->getNome()        		  << std::endl <<
			    "Identificador: " 				 	<< this->sapos[i]->getIdentificador() 		  << std::endl <<
				"Quantidade de provas disputadas: " << this->sapos[i]->getQuantProvasDisputadas() << std::endl <<
			    "Vitorias: " 					    << this->sapos[i]->getVitorias()	          << std::endl <<
			    "Derrotas: "       					<< this->sapos[i]->getDerrotas()    	      << std::endl <<
				"Ranking: "       					<< this->sapos[i]->getRankingAtual()  	      << std::endl <<
																				  			 	     std::endl;
            }
		}
	}
}
