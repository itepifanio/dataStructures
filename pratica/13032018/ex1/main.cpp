#include <iostream>
#include "dado.h"
using namespace std;

int main(){
	int numLancamento;
	cout << "Numero de lancamentos";
	cin >> numLancamento;
	for(int i = 0; i < numLancamento; i++){
		Dado d;
		int lado;
		cin >> lado;
		d.setLado(lado);

		cout << d.getLado() << endl;
	}
	
	return 0;
}
