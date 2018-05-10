#ifndef _GERENTE_HPP_
#define _GERENTE_HPP_
#include <string>
#include "funcionario.hpp"

class Gerente : public Funcionario{
	private:
		Gerente();
		std::string senha;
		int numeroDeFuncionariosGerenciados;
};

#endif

