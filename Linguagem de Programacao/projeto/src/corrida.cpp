#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include "../include/corrida.hpp"
#include "../include/pista.hpp"
#include "../include/sapos.hpp"

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

	std::vector<std::vector<std::string> > dataList;

	std::string line = "";

	while (getline(file, line))
	{
		std::vector<std::string> vec;
		boost::algorithm::split(vec, line, boost::is_any_of(delimitador));
		dataList.push_back(vec);
	}

	// Fecha o arquivo
	file.close();

	for(std::vector<std::string> vec : dataList)
	{
		nome = vec[0];
		identificador = vec[2];
		forcaPulo = std::stoi(vec[2]);

		Sapo sapo(nome, identificador, forcaPulo);

		this->sapos.push_back(&sapo);
	}
}

void Corrida::estatisticas(){
	// Listar os sapos ordenados por distância percorrida
	if(this->sapos.size() == 0){
		std::cout << "Nenhuma corrida foi iniciada." <<
					 " Sem nenhuma estatistica"
				  << std::endl;
	}

	for(std::size_t i = 0; i < this->sapos.size(); i++){

		std::cout << *(this->sapos[i]) << std::endl;
	}
}
