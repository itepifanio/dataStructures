#include <sstream>
#include <iostream>
#include "../include/dado.hpp"

int main()
{
	Dado d1;
	Dado d2(5);
	Dado* d3 = new Dado();
	std::cout << "Valor d1: " << d1 << std::endl;
	std::cout << "Valor d2: " << d2 << std::endl;
	std::cout << "Valor d3: " << (*d3) << std::endl;
	int soma = d1+d2+(*d3);
	std::cout << "Soma: " << soma << std::endl;
	std::cout << "d1+5: " << d1+5 << std::endl;
	return 0;
}
