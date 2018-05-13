#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_
#include <iostream>
#include <string>

class Funcionario{
	protected:
		std::string nome;
		float salario;
		std::string admissao;
	public:
		Funcionario();
		~Funcionario();
		std::string getNome();
		void setNome(std::string nome);
		float getSalario();
		void setSalario(float salario);
		std::string getAdmissao();
		void setAdmissao(std::string admissao);
		
		friend std::istream& operator >> (std::istream &i, Funcionario &f);
		friend std::ostream& operator << (std::ostream &o, Funcionario &f);
};

#endif
