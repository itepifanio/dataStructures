#ifndef _CHOCOLATE_HPP
#define _CHOCOLATE_HPP
#include "../produtoNaoDuravel.hpp"
#include <string>

class Chocolate : public ProdutoNaoDuravel {
    private:
		std::string tipo;
        float quantidadeCacau;

	public:
		// Criando construtor, pois é obrigado para heranças
		Chocolate(std::string tipo, float quantidadeCacau);
};

#endif
