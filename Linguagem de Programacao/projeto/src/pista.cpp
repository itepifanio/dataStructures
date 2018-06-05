/**
* @author Ítalo Epifânio
* @file pista.cpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/src/pista.cpp
* @since 29/05/18
* @date 31/05/18
* @brief Implementações dos métodos da classe pista
*/

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


