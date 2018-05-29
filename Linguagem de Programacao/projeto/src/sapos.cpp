#include "../include/sapos.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int Sapo::distanciaAPercorrer;

Sapo::Sapo(std::string id, int forca){
	identificador = id;
	distancia = 0;
	quantPulo = 0;
	forcaPulo = forca;
}

int Sapo::getForcaPulo(){
	return forcaPulo;
}

void Sapo::setForcaPulo(int forca){
	forcaPulo = forca;
}

// Métodos
void Sapo::pular(){
	// Usa a hora para gerar um numero aleatorio
	std::srand (std::time(NULL));
	// Gera numero aleatorio entre 1 e a distancia do pulo
	// que um sapo pode dar
	distancia += std::rand() % getForcaPulo() + 1;

	quantPulo++;
}
