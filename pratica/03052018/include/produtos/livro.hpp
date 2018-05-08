#ifndef _LIVRO_HPP
#define _LIVRO_HPP
#include "../produtoDuravel.hpp"

class Livro : public ProdutoDuravel {
    private:
		int paginas;

	public:
		// Criando construtor, pois é obrigado para heranças
		Livro();
};

#endif
