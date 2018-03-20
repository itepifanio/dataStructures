#include "sapos.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int Sapo::distanciaAPercorrer;

Sapo::Sapo(string id, int dist){
	identificador = id;
	// Distancia máxima que o sapo pode pular
	distancia = dist;
	quantPulo = 0;
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

// Métodos
int Sapo::pular(){
	// Usa a hora para gerar um numero aleatorio
	std::srand (std::time(nullptr));
	// Gera numero aleatorio entre 1 e a distancia do pulo
	// que um sapo pode dar
	int distanciaPercorrida = std::rand() % getDistancia() + 1;

  quantPulo++;

  return distanciaPercorrida;
}
