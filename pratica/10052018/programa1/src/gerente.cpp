#include "../include/gerente.hpp"
#include <iostream>

Gerente::Gerente(){
	std::cout << "Um burguês safado foi criado" << std::endl;
}

Gerente::~Gerente(){}

void Gerente::aumentaSalario(){
	this->salario *= (1 + (10/100));
}
