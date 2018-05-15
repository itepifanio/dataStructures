#include "../include/secretaria.hpp"
#include <string>

Secretaria::Secretaria(){}

Secretaria::~Secretaria(){}

void Secretaria::aumentaSalario(){
	this->salario *= (1 + (8/100));
}
