#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_
#include <string>
#include <vector>

#include "funcionario.hpp"

class Empresa{
	protected:
		Empresa();
		~Empresa();
		Empresa(std::string nome, std::string cnpj);
		std::string nome;
		std::string cnpj;
		std::vector<Funcionario> funcionarios;

};

#endif
