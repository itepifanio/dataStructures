#include <iostream>
#include "dado.h"
using namespace std;

int main(){
	int numLancamento, soma = 0;
	cout << "Numero de lancamentos";
	cin >> numLancamento;
	for(int i = 0; i < numLancamento; i++){
		Dado d;
		int lado;
		cin >> lado;
		d.setLado(lado);

		soma += d.getLado();
	}

	cout << "Soma dos dados lancados: " << soma;
	
	return 0;
}
