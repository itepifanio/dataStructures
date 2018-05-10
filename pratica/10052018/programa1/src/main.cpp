#include <iostream>
#include <string>
#include "../include/funcionario.hpp"
#include "../include/gerente.hpp"
#include "../include/secretaria.hpp"
#include "../include/operario.hpp"


int main(){
	Funcionario* funcionario = new Operario;
//	Operario* operario = (Funcionario*)(funcionario);

	std::cout << "Executou" << std::endl;

	return 0;
}
