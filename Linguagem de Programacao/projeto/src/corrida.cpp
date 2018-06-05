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


Corrida::Corrida(std::string nome, Pista pista){
	this->nome = nome;
	this->pista = &pista;
}

void Corrida::inserirPista(Pista &pista){
	// Se não existir pista, adiciona-se uma nova
	if(this->pista == 0){
		this->pista = &pista;
		return;
	}

	std::cout << "Já existe uma pista nessa corrida"        << std::endl
			  << "não há tempo para cadastrar outra" 	    << std::endl
			  << "aos seus postos, vai ser dada a largada!" << std::endl;
}

void Corrida::inserirSapos(std::string nomeArquivo, std::string delimitador){
	std::string nome, identificador;
	int forcaPulo;

	std::ifstream file(nomeArquivo);

    ReadCsv leitor(nomeArquivo, delimitador);
    
    std::vector<std::vector<std::string>> dataList = leitor.lerCsv();

	for(std::vector<std::string> vec : dataList)
	{
    	Sapo sapo = new Sapo();
		sapo.setNome(vec[0]);
		sapo.setIdentificador(vec[1]);
		sapo.setForcaPulo(std::stoi(vec[2]));

		this->sapos.push_back(&sapo);
	}
}

void Corrida::estatisticas(){
	// Listar os sapos ordenados por distância percorrida
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
