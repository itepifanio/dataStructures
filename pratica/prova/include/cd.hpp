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
};

#endif
