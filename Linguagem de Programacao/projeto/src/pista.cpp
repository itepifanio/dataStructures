#include "../include/pista.hpp"
#include <iostream>

// Construtores
Pista::Pista(){}
Pista::~Pista(){}

Pista::Pista(std::string nome, int tamanho){
	this->nome = nome;
	this->tamanho = tamanho;
}

// Sobrecarga de ostream
std::ostream& operator << (std::ostream &o, Pista &pista){
	o << "Pista: " 			<< std::endl     <<
							   std::endl     <<
		 "Nome:  "			<< pista.nome    << 						   
		 "Tamanho: "        << pista.tamanho;
	
	return o;
}


