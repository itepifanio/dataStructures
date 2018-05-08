#ifndef _REFRIGERANTE_HPP
#define _REFRIGERANTE_HPP
#include "../produtoNaoDuravel.hpp"
#include <string>

class Refrigerante : public ProdutoNaoDuravel {
    private:
		std::string sabor;

	public:
		// Criando construtor, pois é obrigado para heranças
		Refrigerante();
};

#endif
