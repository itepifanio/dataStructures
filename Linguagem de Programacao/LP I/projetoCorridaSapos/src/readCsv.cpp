/**
* @author Ítalo Epifânio
* @file readCsv.cpp
* @sa https://github.com/itepifanio/estudosCpp/blob/master/Linguagem%20de%20Programacao/projeto/src/readCsv.cpp
* @since 29/05/18
* @date 31/05/18
* @brief Implementações dos métodos da classe readCsv
*/

#include "../include/readCsv.hpp"
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <boost/algorithm/string.hpp>

// Construtores
ReadCsv::ReadCsv(){}
ReadCsv::~ReadCsv(){}

/**
* @brief Construtor responsável por inicializar um leitor de csv
* @param std::string nomeArquivo
* @param std::string delimitador
*/
ReadCsv::ReadCsv(std::string nomeArquivo, std::string delimitador){
    this->nomeArquivo = nomeArquivo;
    this->delimitador = delimitador;
}


/**
* @brief Recupera o pulo máximo do sapo
* @return std::vector<std::vector<std::string>>
*/
std::vector<std::vector<std::string>> ReadCsv::lerCsv()
{
	std::ifstream file(nomeArquivo);

	std::vector<std::vector<std::string>> dataList;

	std::string linha = "";

	while (getline(file, linha))
	{
		std::vector<std::string> vec;
		boost::algorithm::split(vec, linha, boost::is_any_of(delimitador));
		dataList.push_back(vec);
	}

	file.close();

	return dataList;
}
