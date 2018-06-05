#include "../include/sapos.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int Sapo::distanciaAPercorrer;

// Construtores
Sapo::Sapo(){}
Sapo::~Sapo(){}

/**
* @brief Construtor responsável por inicializar um sapo com seu nome, identificador e pulo máximo (forcaPulo). Os demais atributos também são inicializados como zero.
*/
Sapo::Sapo(std::string nome, std::string identificador, int forcaPulo){
	this->identificador = identificador;
	this->nome = nome;
	this->forcaPulo = forcaPulo;

	this->empates = 0;
	this->vitorias = 0;
	this->derrotas = 0;
	this->quantPuloDados = 0;
	this->distanciaPercorrida = 0;
	this->quantProvasDisputadas = 0;

}

/**
* @brief Calcula aleatoriamente um valor de 1 até a maior distancia que um sapo pode pular e soma isso a distancia percorrida pelo sapo.
*/
void Sapo::pular(){
	// Usa a hora para gerar um numero aleatorio
	std::srand (std::time(NULL));
	// Gera numero aleatorio entre 1 e a distancia do pulo
	// que um sapo pode dar
	this->distanciaPercorrida += std::rand() % getForcaPulo() + 1;

	this->quantPuloDados++;
}

// Sobrecarga de operadores iostream

/*
std::istream& operator>> (std::istream &i, Sapo &sapo){
    std::cout << "Insira o nome do sapo: " << std::endl;
    i >> sapo.nome;

    std::cout << "Insira o identificador do sapo corredor: " << std::endl;
    i >> sapo.identificador;

    std::cout << "Insira a força do pulo em newtons: " << std::endl;
    i >> sapo.forcaPulo;

    return i;
}*/

/**
* @brief Sobrecarga de ostream, exibe as informações de um objeto sapo
*/
std::ostream& operator<< (std::ostream &o, Sapo &sapo){
    o <<
    "Informações sobre o sapo: "          					   		  << std::endl <<
                                		      	                  		 std::endl <<
    "Nome: "					     	<< sapo.nome        		  << std::endl <<
    "Identificador: " 				 	<< sapo.identificador 		  << std::endl <<
    "Força do Pulo: " 				 	<< sapo.forcaPulo         	  << std::endl <<
    "Quantidade de pulos dados: "    	<< sapo.quantPuloDados        << std::endl <<
    "Quantidade de provas disputadas: " << sapo.quantProvasDisputadas << std::endl <<
    "Vitorias: " 					    << sapo.vitorias	          << std::endl <<
    "Derrotas: "       					<< sapo.derrotas    	      << std::endl <<
    "Empates: "       					<< sapo.empates     	      << std::endl <<
                                        							     std::endl;

    return o;
}

/**
* @brief Recupera o nome do sapo
*/
std::string Sapo::getNome(){
    return nome;
}

/**
* @brief Insere o nome do sapo
*/
void Sapo::setNome(std::string nome){
    this->nome = nome;
}

/**
* @brief Recupera o identificador do sapo
*/
std::string Sapo::getIdentificador(){
    return identificador;
}


/**
* @brief Insere o identificador do sapo
*/
void Sapo::setIdentificador(std::string identificador){
    this->identificador = identificador;
}

/**
* @brief Recupera o pulo máximo do sapo
*/
int Sapo::getForcaPulo(){
	return forcaPulo;
}

/**
* @brief Insere o pulo máximo do sapo
*/
void Sapo::setForcaPulo(int forca){
	forcaPulo = forca;
}
