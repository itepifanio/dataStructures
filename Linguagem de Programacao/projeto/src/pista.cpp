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

/**
* @brief Construtor que inicializa a pista com seu nome e tamanho
* @param std::string nome
* @param int tamanho
*/
Pista::Pista(std::string nome, int tamanho){
	this->nome = nome;
	this->tamanho = tamanho;
}

/**
* @brief Sobrecarga de ostream, exibe as informações de um objeto pista
* @param std::ostream &o
* @param Pista &pista
* @return std::ostream &o
*/
std::ostream& operator << (std::ostream &o, Pista &pista){
	o << "Pista: " 			<< std::endl     <<
							   std::endl     <<
		 "Nome:  "			<< pista.nome    <<
		 "Tamanho: "        << pista.tamanho;

	return o;
}

/**
* @brief Insere o nome da pista
* @param std::string nome
*/
void Pista::setNome(std::string nome){
	this->nome = nome;
}

/**
* @brief Insere o tamanho da pista
* @param int tamanho
*/
void Pista::setTamanho(int tamanho){
	this->tamanho = tamanho;
}

/**
* @brief Recupera o tamanho da pista
* @return int tamanho
*/
int Pista::getTamanho(){
	return this->tamanho;
}
