#include "../include/midia.hpp"
#include "../include/cd.hpp"
#include <iostream>
#include <string>

Cd::Cd(){}

Cd::~Cd(){}

void Cd::update(){
        std::string titulo, anoLancamento, autor;
        std::string gravadora;
		int quantidadeFaixas;

        std::cout << "Insira o titulo do cd: " << std::endl;
        std::cin >> titulo;

        std::cout << "Insira o ano de lancamento do cd: " << std::endl;
        std::cin >> anoLancamento;

        std::cout << "Insira o artista do cd: " << std::endl;
        std::cin >> autor;

        std::cout << "Insira a gravadora do cd: " << std::endl;
        std::cin >> gravadora;

        std::cout << "Insira a quantidade de faixas do cd: " << std::endl;
        std::cin >> quantidadeFaixas;

        this->titulo = titulo;
        this->anoLancamento = anoLancamento;
        this->autor = autor;
        this->quantidadeFaixas = quantidadeFaixas;
        this->gravadora = gravadora;
}
