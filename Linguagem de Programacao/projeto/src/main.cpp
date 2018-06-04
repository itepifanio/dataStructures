#include "../include/corrida.hpp"
#include "../include/sapos.hpp"
#include "../include/pista.hpp"
#include <iostream>
#include <string>

int main(){
	// Criando Pista
	Pista pista("Interlagos", 100);

	Corrida corrida;
	corrida.inserirPista(pista);
	corrida.inserirSapos("sapos.csv", ",");
	//corrida.estatisticas();

	return 0;
}
