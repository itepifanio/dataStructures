#include "../include/operario.hpp"
#include <iostream>

Operario::Operario(){
	std::cout << "Se o operário tudo produz, a ele tudo pertence" << std::endl;
	std::cout << "Um novo operário foi criado" << std::endl;
}

Operario::~Operario(){}

void Operario::aumentaSalario(){
	this->salario *= (1 + (5/100));
}
