#ifndef _CD_HPP_
#define _CD_HPP_
#include <string>
#include "midia.hpp"

class Cd : public Midia{
	private:
		std::string gravadora;
		int quantidadeFaixas;
	public:
		Cd();
		~Cd();
		Cd(
			std::string titulo, std::string anoLancamento,
			std::string autor, std::string gravadora,
			int quantidadeFaixas
		);
		void update();
		friend std::istream& operator >> (std::istream &i, Cd &cd);
		friend std::ostream& operator << (std::ostream &o, Cd &cd);
};

#endif
