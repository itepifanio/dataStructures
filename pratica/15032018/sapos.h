#include <iostream>
#ifndef SAPOS_H
#define SAPOS_H
#include <string>
using namespace std;

class Sapo{
	private:
		string identificador;
		int distancia;
		int quantPulo;
	public:
    Sapo(string id, int distancia);
		//Gets e sets
		int getDistancia();
		void setDistancia(int l);

		int getQuantPulo();
		void setQuantPulo(int l);

		string getIdentificador();
		void setIdentificador(string a);

		static int distanciaAPercorrer;
		int pular();
};
#endif
