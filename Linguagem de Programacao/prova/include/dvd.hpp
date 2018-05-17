#ifndef _DVD_HPP_
#define _DVD_HPP_
#include <string>
#include "midia.hpp"

class Dvd : public Midia{
	private:
		// Classificacao por idade
		int classificacao;
		float duracao;
	public:
		Dvd();
		~Dvd();
		Dvd(
			std::string titulo, std::string anoLancamento,
			std::string autor, int classificacao,
			float duracao
		);
		void update();
		friend std::istream& operator >> (std::istream &i, Dvd &dvd);
		friend std::ostream& operator << (std::ostream &o, Dvd &dvd);
};

#endif
