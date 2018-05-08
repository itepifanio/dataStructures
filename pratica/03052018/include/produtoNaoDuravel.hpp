#ifndef _PRODUTONAODURAVEL_HPP
#define _PRODUTONAODURAVEL_HPP
#include "produto.hpp"

class ProdutoNaoDuravel : public Produto {
	protected:
		std::string dataValidade;
		std::string genero;
	public:
		// Criando construtor, pois é obrigado para heranças
		ProdutoNaoDuravel();

		void setDataValidade(std::string dataValidade);
		void setGenero(std::string genero);
};

#endif
