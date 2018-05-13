#include <iostream>
#include <string>
#include "../include/funcionario.hpp"
#include "../include/gerente.hpp"
#include "../include/secretaria.hpp"
#include "../include/operario.hpp"
#include "../include/empresa.hpp"


int main(){

	Empresa empresa("Mundo Livre S.A.", "123456");

	Funcionario *operario = new Operario;
	Operario *funcionario = (Operario*) operario;

	std::cout << "Insira o nome, salário e admissao do funcionário" << '\n';
	std::cin >> *operario;

	std::cout << *operario << std::endl;
	
	empresa.adicionarFuncionario(*funcionario);

	return 0;
}
