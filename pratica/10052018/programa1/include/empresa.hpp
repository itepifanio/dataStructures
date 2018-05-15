#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_
#include <string>
#include <vector>

#include "funcionario.hpp"

class Empresa{
	private:
		std::string nome;
		std::string cnpj;
	public:
		Empresa();
		~Empresa();
		Empresa(std::string nome, std::string cnpj);
		std::vector<Funcionario> funcionarios;
		void adicionarFuncionario(Funcionario funcionario);
		
};

#endif
