#ifndef _PRODUTODURAVEL_HPP
#define _PRODUTODURAVEL_HPP
#include "produto.hpp"

class ProdutoDuravel : public Produto {
	private:
		std::string materialPredominante;
		std::string durabilidade;
	public:
		ProdutoDuravel();

		/*
		ProdutoDuravel(
			std::string nome, float preco, std::string marca,
			std::string descricao, std::string dataFabricacao,
			std::string materialPredominante, std::string durabilidade
		);
		*/

		void setMaterialPredominante(std::string materialPredominante);

		void setDurabilidade(std::string materialPredominante);

};

#endif
