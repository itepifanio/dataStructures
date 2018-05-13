#include "../include/funcionario.hpp"
#include <iostream>
#include <string>

Funcionario::Funcionario(){}

Funcionario::~Funcionario(){}

// Gets e sets
std::string Funcionario::getNome(){
	return this->nome;
}

void Funcionario::setNome(std::string nome){
	this->nome = nome;
}

float Funcionario::getSalario(){
	return this->salario;
}

void Funcionario::setSalario(float salario){
	this->salario = salario;
}

std::string Funcionario::getAdmissao(){
	return admissao;
}

void Funcionario::setAdmissao(std::string admissao){
	this->admissao = admissao;
}

std::istream& operator>> (std::istream &i, Funcionario &f){
	i >> f.nome;
	i >> f.salario;
	i >> f.admissao;

	return i;
}

std::ostream& operator<< (std::ostream &o, Funcionario &f){
	o << "Nome: "   << f.nome     << std::endl <<
	 	 "Salário: "  << f.salario  << std::endl <<
		 "Admissao: " << f.admissao << std::endl;
	return o;
}
