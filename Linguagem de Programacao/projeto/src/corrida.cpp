#include "../include/corrida.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <boost/algorithm/string.hpp>

Corrida::Corrida(){}
Corrida::~Corrida(){}
Corrida::Corrida(std::string nome, Pista pista){
	this->nome = nome;
	this->pista = &pista;
}

void Corrida::inserirPista(Pista &pista){
	// Se não existir pista, adiciona-se uma nova
	if(! this->pista){
		this->pista = &pista;
		return;
	}

	std::cout << "Já existe uma pista nessa corrida"       << std::endl
			  << "não há tempo para cadastrar outra" 	   << std::endl
			  << "aos seus postos, vai ser dada a largada" << std::endl;
}

void Corrida::inserirSapos(std::string nomeArquivo, std::string delimitador = ","){

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
		for(int i = 0; i < 3; i++)
		{
			nome = vec[0];
			identificador = vec[1];
			forcaPulo = std::stoi(vec[2]);
		}
		Sapo sapo(nome, identificador, forcaPulo);

		this->sapos.push_back(&(sapo));
	}
}

void Corrida::estatisticas(){
	std::cout << "hue" << '\n';
	// Listar os sapos ordenados por distância percorrida
	/*for(std::size_t i = 0; i < this->sapos.size(); i++){
		std::cout << this->sapos[i] << std::endl;
	}*/
}
