/**
* Armazena os dados de uma pista.
* Armazena os sapos corredores.
* Exibe as estatísticas da corrida e dos sapos
* Lê arquivo CSV com os sapos e as corridas
*/

#ifndef _CORRIDA_HPP_
#define _CORRIDA_HPP_
#include "../include/sapos.hpp"
#include "../include/pista.hpp"
#include <string>
#include <vector>

class Corrida{
	private:
		std::string nome;
		Pista *pista;
		std::vector<Sapo*> sapos;
	public:
		Corrida();
		~Corrida();
		Corrida(std::string nome, Pista pista);
		void inserirSapo(Sapo &sapo);
		void inserirPista(Pista &pista);
		void estatisticas();
			
};

#endif
