#include <sstream>
#include <iostream>
#include "../include/dado.hpp"

int main()
{
	// Mistura mais proxima do C++...
	std::vector<Dado*> muitosDados;
	muitosDados.push_back(new Dado());
	muitosDados.push_back(new Dado());
	muitosDados.push_back(new Dado());

	for (int i = 0; i < (int) muitosDados.size(); ++i)
		std::cout << (*muitosDados[i]) << std::endl;

	return 0;
}