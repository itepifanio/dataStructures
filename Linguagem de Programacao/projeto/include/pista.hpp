/**
* @author Ítalo Epifânio
* @file pista.hpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/include/pista.hpp
* @since 29/05/18
* @date 31/05/18
* @brief Cabeçalho da função que define uma pista
*/

#ifndef PISTA_HPP
#define PISTA_HPP
#include <string>
#include <iostream>

class Pista{
	private:
		std::string nome;
		int tamanho;
	public:
		Pista();
		~Pista();
		Pista(std::string nome, int tamanho);
		friend std::ostream& operator << (std::ostream &o, Pista &pista);
		void setNome(std::string nome);
		void setTamanho(int tamanho);
		int getTamanho();
};

#endif
