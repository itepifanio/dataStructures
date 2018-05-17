#include <iostream>
#include "../include/ordList.hpp"

int main()
{
	OrdList<int> listaOrdenada;
	listaOrdenada.add(10);
	listaOrdenada.add(7);
	listaOrdenada.add(3);
	listaOrdenada.add(15);

	listaOrdenada.show();

	std::cout << listaOrdenada.find(3)  << '\n';

	return 0;
}
