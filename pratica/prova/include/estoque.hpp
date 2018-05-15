#ifndef _ESTOQUE_H_
#define _ESTOQUE_H_
#include "midia.hpp"

class Estoque{
	private:
		std::vector<Midia> midias;
	public: 
		Estoque();
		~Estoque();
};

#endif
