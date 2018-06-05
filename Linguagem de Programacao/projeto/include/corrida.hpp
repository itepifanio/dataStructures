#ifndef CORRIDA_HPP
#define CORRIDA_HPP
#include "../include/sapos.hpp"
#include "../include/pista.hpp"
#include <string>
#include <vector>

/**
* Armazena os dados de uma pista.
* Armazena os sapos corredores.
* Exibe as estatísticas da corrida e dos sapos
* Lê arquivo CSV com os sapos e as corridas
*/
class Corrida{
	private:
		std::string nome;
		std::vector<Sapo*> sapos;
		Pista *pista;
	public:
		Corrida();
		~Corrida();
		Corrida(std::string nome, Pista pista);

		void inserirSapos(std::string nomeArquivo, std::string delimitador);
		void inserirPista(Pista &pista);
		void estatisticas();
//        void exibirRanking(); TODO:: A implementar

};

#endif
