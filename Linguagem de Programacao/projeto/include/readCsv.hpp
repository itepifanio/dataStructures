/**
* @author Ítalo Epifânio
* @file corrida.hpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/include/readCsv.hpp
* @since 29/05/18
* @date 31/05/18
* @brief Cabeçalho da função que define um leitor de csv
*
* Define um objeto que em sua construção recebe um nome de arquivo (.csv)
*  e um delimitador, além de uma função responsável pela leitura do csv.
*/

#ifndef READCSV_HPP
#define READCSV_HPP
#include <string>
#include <iostream>

class ReadCsv{
	private:
		std::string nomeArquivo;
		std::string delimitador;
	public:
		ReadCsv();
		~ReadCsv();
		ReadCsv(std::string nomeArquivo, std::string delimitador);
		std::vector<std::vector<std::string>> lerCsv();
};

#endif
