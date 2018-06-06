/**
* @author Ítalo Epifânio
* @file corrida.hpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/include/corrida.hpp
* @since 29/05/18
* @date 31/05/18
* @brief Cabeçalho da função que cria a instância de uma corrida
*
* Responsável por inserir os sapos e a pista, utilizando
* leitura de csv's para criar esses objetos.
* Essa classe também é responsável pela corrida e por exibir
* as estatísticas dos sapos e o ranking da corrida.
*/

#ifndef CORRIDA_HPP
#define CORRIDA_HPP
#include "../include/sapos.hpp"
#include "../include/pista.hpp"
#include <string>
#include <vector>

class Corrida{
	private:
		std::string nome;
		std::vector<Sapo*> sapos;
		Pista *pista;
	public:
		Corrida();
		~Corrida();
		Corrida(std::string nome);

		void inserirSapos(std::string nomeArquivo, std::string delimitador);
		void inserirPista(std::string nomeArquivo, std::string delimitador);
		void exibirEstatisticas();
//        void exibirRanking(); TODO:: A implementar
};

#endif
