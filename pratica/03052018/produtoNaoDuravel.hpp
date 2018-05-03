#ifndef _PRODUTODURAVEL_HPP
#define _PRODUTODURAVEL_HPP
#include <string>
#include "produto.hpp"


class ProdutoDuravel : public Produto {
	private:
		string dataValidade;
		string genero;	
}
