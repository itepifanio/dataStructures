#include "../include/empresa.hpp"
#include <string>

Empresa::Empresa(){}

Empresa::~Empresa(){}

Empresa::Empresa(std::string nome, std::string cnpj){
	this->nome = nome;
	this->cnpj = cnpj;
}
