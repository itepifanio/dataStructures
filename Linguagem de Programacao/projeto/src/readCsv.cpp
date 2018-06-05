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

ReadCsv(std::string nomeArquivo, std::string delimitador){
    this->nomeArquivo = nomeArquivo;
    this->delimitador = delimitador;
}

std::vector<std::vector<std::string>> ReadCsv::lerCsv()
{
	std::ifstream file(fileName);
 
	std::vector<std::vector<std::string>> dataList;
 
	std::string line = "";

	while (getline(file, line))
	{
		std::vector<std::string> vec;
		boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
		dataList.push_back(vec);
	}

	file.close();
 
	return dataList;
}
