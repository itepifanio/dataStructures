#include <iostream>
#include <string>
#include "../include/funcionario.hpp"
#include "../include/gerente.hpp"
#include "../include/secretaria.hpp"
#include "../include/operario.hpp"


int main(){
	Funcionario *operario = new Operario;
	Operario *funcionario = (Operario*) operario;
	
	return 0;
}
