/**
* @author Ítalo Epifânio
* @file sapos.hpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/include/sapos.hpp
* @since 29/05/18
* @date 31/05/18
* @brief Cabeçalho da função que define a classe sapo
*
* Cada sapo tem um nome e identificador, além de pularem de acordo com
* a sua força máxima de seu pulo (definida pelo atributo forcaPulo)
*/

#ifndef SAPOS_H
#define SAPOS_H
#include "../include/sapos.hpp"
#include <string>
#include <iostream>

class Sapo{
	private:
		std::string nome;
		std::string identificador;
		int distanciaPercorrida;
		int quantProvasDisputadas;
		int vitorias;
		int derrotas;
		int empates;
		int quantPuloDados;
		int forcaPulo;
	public:
		// Construtores
		Sapo();
		~Sapo();

	    Sapo(
	    	std::string nome, std::string identificador, int forcaPulo
	    );
	
		// Gets e Sets
		void setForcaPulo(int p);
        void setNome(std::string nome);
        void setIdentificador(std::string identificador);
		int getForcaPulo();
		int getDistanciaPercorrida();

		// Função de pular
		void pular();

		// Sobrecarga de operadores
        friend std::ostream& operator << (std::ostream &o, Sapo &sapo);
};

#endif
