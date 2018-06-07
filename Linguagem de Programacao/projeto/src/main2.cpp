/**
* @author Ítalo Epifânio
* @file main.cpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/src/main2.cpp
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

	Corrida corrida;
	corrida.inserirPista("pistas.csv", ",");
	corrida.inserirSapos("sapos.csv", ",");
	corrida.iniciarCorrida();

	return 0;
}
