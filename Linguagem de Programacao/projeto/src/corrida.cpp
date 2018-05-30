#include "../include/corrida.hpp"
#include <string>
#include <iostream>

Corrida::Corrida(){}
Corrida::~Corrida(){}
Corrida::Corrida(std::string nome, Pista pista){
	this->nome = nome;
	this->pista = &pista;
}

void Corrida::inserirSapo(Sapo &sapo){
	this->sapos.push_back(&(sapo));
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

void Corrida::estatisticas(){
	// Listar os sapos ordenados por distância percorrida
}
