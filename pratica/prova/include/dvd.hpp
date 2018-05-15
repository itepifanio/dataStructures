#ifndef _DVD_HPP_
#define _DVD_HPP_
#include <string>
#include "midia.hpp"

class Dvd : public Midia{
	private:
		// Classificacao para maiores de 18 anos,
		// por exemplo
		int classificacao;
		float duracao;
	public:
		Dvd();
		~Dvd();
};

#endif
