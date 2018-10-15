/**
* @author Ítalo Epifânio
* @file main.cpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/src/main.cpp
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
	int opcao = 0;
	Corrida corrida;

	while(true){
		std::cout << "Digite 1 para ver estatisticas dos sapos"  << std::endl
		 		  << "Digite 2 para ver estatisticas das pistas" << std::endl
				  << "Digite 3 para iniciar uma corrida" 		 << std::endl
				  << "Digite 4 para criar os sapos" 			 << std::endl
				  << "Digite 5 para criar a pista" 				 << std::endl
				  << "Digite 6 para sair" 				 		 << std::endl;
		std::cin >> opcao;

		if(opcao == 1){
			corrida.exibirRanking();
		}else if(opcao == 2){
			corrida.exibirEstatisticasPistas("pistas.csv", ",");
		}else if(opcao == 3){
			std::cout << "/////// COMPETIDORES DE HOJE ///////" << std::endl;
			corrida.listarCompetidores();
			corrida.iniciarCorrida();
		}else if(opcao == 4){
			corrida.inserirSapos("sapos.csv", ",");
		}else if(opcao == 5){
			corrida.inserirPista("pistas.csv", ",");
		}else if(opcao == 6){
			corrida.escreverCsv();
			break;
		}
	}
}
