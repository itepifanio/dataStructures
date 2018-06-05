#include "../include/sapos.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int Sapo::distanciaAPercorrer;

// Construtores
Sapo::Sapo(){}
Sapo::~Sapo(){}

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

// Métodos
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

// Gets e sets
std::string Sapo::getNome(){
    return nome;
}

void Sapo::setNome(std::string nome){
    this->nome = nome;
}

std::string Sapo::getIdentificador(){
    return identificador;
}

void Sapo::setIdentificador(std::string identificador){
    this->identificador = identificador;
}


int Sapo::getForcaPulo(){
	return forcaPulo;
}

void Sapo::setForcaPulo(int forca){
	forcaPulo = forca;
}
