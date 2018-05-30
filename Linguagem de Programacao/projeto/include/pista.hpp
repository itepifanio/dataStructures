#ifndef _PISTA_HPP_
#define _PISTA_HPP_
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
		
};

#endif
