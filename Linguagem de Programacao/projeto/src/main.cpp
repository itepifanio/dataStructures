/**
* @author Ítalo Epifânio
* @file main.cpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/src/sapos.cpp
* @since 29/05/18
* @date 31/05/18
* @brief Esqueleto das implementações das outras classes. Executa a comunicação com o usuário
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
