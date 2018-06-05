/**
* @author Ítalo Epifânio
* @file sapos.cpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/src/sapos.cpp
* @since 29/05/18
* @date 31/05/18
* @brief Implementações dos métodos da classe sapo
*/

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
