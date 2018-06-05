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
