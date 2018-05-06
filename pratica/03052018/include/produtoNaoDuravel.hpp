#ifndef _PRODUTONAODURAVEL_HPP
#define _PRODUTONAODURAVEL_HPP
#include "produto.hpp"

class ProdutoNaoDuravel : public Produto {
	private:
		std::string dataValidade;
		std::string genero;
	public:
		ProdutoNaoDuravel();
		/*
		ProdutoNaoDuravel(
			std::string nome, float preco, std::string marca,
		    std::string descricao, std::string dataFabricacao,
			std::string dataValidade, std::string genero
		);
		*/
		void setDataValidade(std::string dataValidade);
		void setGenero(std::string genero);
};

#endif
