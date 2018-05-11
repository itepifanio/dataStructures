#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_
#include <string>

class Funcionario{
	protected:
		std::string nome;
		float salario;
		std::string admissao;
	public:
		Funcionario();
		~Funcionario();
};

#endif
