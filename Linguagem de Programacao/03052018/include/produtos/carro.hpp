#ifndef _CARRO_HPP
#define _CARRO_HPP
#include "../produtoDuravel.hpp"

class Carro : public ProdutoDuravel {
    private:
		int numeroPortas;
		int assentos;
	public:
		// Criando construtor, pois é obrigado para heranças
        Carro();
	
};

#endif
