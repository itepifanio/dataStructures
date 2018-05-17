#ifndef _PRODUTODURAVEL_HPP
#define _PRODUTODURAVEL_HPP
#include "produto.hpp"

class ProdutoDuravel : public Produto {
	protected:
		std::string materialPredominante;
		std::string durabilidade;
	public:
		// Criando construtor, pois é obrigado para heranças
		ProdutoDuravel();

		void setMaterialPredominante(std::string materialPredominante);

		void setDurabilidade(std::string materialPredominante);

};

#endif
