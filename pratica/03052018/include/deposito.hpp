#ifndef _DEPOSITO_HPP
#define _DEPOSITO_HPP
#include <vector>
#include "produto.hpp"

class Deposito {
	public:
        std::vector<Produto*> produtos;

		void adicionaProduto(Produto produto);

        void removeProduto(std::string nomeProduto);

		void quantidadeProduto();

		void maiorValor();
};

#endif
