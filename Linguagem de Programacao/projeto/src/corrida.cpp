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
* Se ainda não tiver sido cadastrada nenhuma pista, cadastra-se através
* da leitura de CSV's
*/
void Corrida::inserirPista(std::string nomeArquivo, std::string delimitador){
	// Se não existir pista, adiciona-se uma nova
	if(this->pista == 0){
		ReadCsv leitor(nomeArquivo, delimitador);

	    std::vector<std::vector<std::string>> dataList = leitor.lerCsv();

		for(std::vector<std::string> vec : dataList)
		{
	    	Pista *pista = new Pista();
			pista->setNome(vec[0]);
			pista->setTamanho(std::stoi(vec[1]));

			this->pista = pista;
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
    
    bool todosUltrapassaram = false;
    int quantosPassaram = 0;
    int ranking = 0;
    // Vê quantas provas os sapos já disputaram
    int provasDisputadas = this->sapos[0]->getQuantidadeProvasDisputadas();
    
	// Enquanto nem todos tiverem ultrapassado a linha de corrida
	while (todosUltrapassaram) {
		for(std::size_t i = 0; i < this->sapos.size(); i++){
			if(this->sapos[i]->getDistanciaPercorrida() =< this->pista->getTamanho()){
				this->sapos[i]->pular();
				std::cout << *(this->sapos[i]) << std::endl;
			}
			
			// Conta quantos sapos já concluiram a corrida na pista
			for(std::size_t i = 0; i < this->sapos.size(); i++){
				if(this->sapos[i]->getDistanciaPercorrida() > this->pista->getTamanho()){
				    // Verifica se o sapo concluiu a prova em andamento
				    // Caso tenha acabado de concluir, então lhe é atribuido ranking e incrementado as provasDisputadas
				    if(this->sapos[i]->getQuantidadeProvasDisputadas() == provasDisputadas){
				        this->sapos[i]->setQuantidadeProvasDisputadas(provasDisputadas+1);
				        this->sapos[i]->setRankingAtual(ranking++);
				    }
				    
    			    quantosPassaram++;
    			}
    		}
    		
    		// Se todos já tiverem passado, encerra-se a corrida
    		if(quantosPassaram == this->sapos.size()){
    		    todosUltrapassaram = true;
    		}	
		}
	}
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

/* TODO:: A implementar
void Corrida::exibirRanking(){

} */
