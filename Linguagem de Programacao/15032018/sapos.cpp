#include "sapos.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int Sapo::distanciaAPercorrer;

Sapo::Sapo(string id, int forca){
	identificador = id;
	distancia = 0;
	quantPulo = 0;
	forcaPulo = forca;
}

// Gets e sets
int Sapo::getDistancia(){
	return distancia;
}

void Sapo::setDistancia(int d){
	distancia = d;
}

int Sapo::getQuantPulo(){
	return quantPulo;
}

void Sapo::setQuantPulo(int q){
	quantPulo = q;
}

string Sapo::getIdentificador(){
	return identificador;
}

void Sapo::setIdentificador(string i){
	identificador = i;
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
