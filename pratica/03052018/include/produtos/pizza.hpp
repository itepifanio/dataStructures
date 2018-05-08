#ifndef _PIZZA_HPP
#define _PIZZA_HPP
#include "../produtoNaoDuravel.hpp"
#include <string>

class Pizza : public ProdutoNaoDuravel {
    private:
		std::string sabor;
        bool bordaRecheada;

	public:
		// Criando construtor, pois é obrigado para heranças
		Pizza();
};

#endif
