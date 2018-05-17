#include "../include/empresa.hpp"
#include <iostream>
#include <string>

Empresa::Empresa(){}

Empresa::~Empresa(){}

Empresa::Empresa(std::string nome, std::string cnpj){
	this->nome = nome;
	this->cnpj = cnpj;
}

void Empresa::adicionarFuncionario(Funcionario funcionario){
	for(size_t i = 0; i < this->funcionarios.size(); i++){
		if(this->funcionarios[i].getNome().compare(funcionario.getNome()) == 0){
			std::cout << "Funcionário já cadastrado " << std::endl;
			return;
		}
	}

	this->funcionarios.push_back(funcionario);
}
