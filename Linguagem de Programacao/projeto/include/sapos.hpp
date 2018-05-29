#include <iostream>
#ifndef SAPOS_H
#define SAPOS_H
#include <string>

class Sapo{
	private:
		std::string nome;
		std::string identificador;
		int distancia;
		int quantPulo;
		int quantProvasDisputadas;
		int forcaPulo;
	public:
	    Sapo(
	    	std::string identificador, int distancia
	    );
		//Gets e sets
		int getDistancia();
		void setDistancia(int l);

		int getQuantPulo();
		void setQuantPulo(int l);

		std::string getIdentificador();
		void setIdentificador(std::string a);

		int getForcaPulo();
		void setForcaPulo(int p);

		static int distanciaAPercorrer;
		void pular();
};
#endif
