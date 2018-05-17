#include "../include/midia.hpp"
#include "../include/cd.hpp"
#include <iostream>
#include <string>

// Construtores

Cd::Cd(){}

Cd::~Cd(){}

Cd::Cd(
    std::string titulo, std::string anoLancamento,
    std::string autor, std::string gravadora,
    int quantidadeFaixas
){
    this->autor = autor;
    this->titulo = titulo;
    this->gravadora = gravadora;
    this->anoLancamento = anoLancamento;
    this->quantidadeFaixas = quantidadeFaixas;
}

// Sobrecargas de operadores iostream

std::istream& operator>> (std::istream &i, Cd &cd){
    std::cout << "Insira o titulo do cd: " << std::endl;
    i >> cd.titulo;

    std::cout << "Insira o ano de lancamento do cd: " << std::endl;
    i >> cd.anoLancamento;

    std::cout << "Insira o diretor do cd: " << std::endl;
    i >> cd.autor;

    std::cout << "Insira a gravadora do cd: " << std::endl;
    i >> cd.gravadora;

    std::cout << "Insira a quantidade de faixas cd: " << std::endl;
    i >> cd.quantidadeFaixas;

    return i;
}

std::ostream& operator<< (std::ostream &o, Cd &cd){
    o <<
    "Informações sobre o cd: "                      << std::endl <<
                                                       std::endl <<
    "Cd: "                   << cd.titulo           << std::endl <<
    "Lancamento: "           << cd.anoLancamento    << std::endl <<
    "Diretor: "              << cd.autor            << std::endl <<
    "Quantidade de faixas: " << cd.quantidadeFaixas << std::endl <<
    "gravadora: "            << cd.gravadora        << std::endl <<
                                                       std::endl;

    return o;
}

// Métodos

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

        this->autor = autor;
        this->titulo = titulo;
        this->gravadora = gravadora;
        this->anoLancamento = anoLancamento;
        this->quantidadeFaixas = quantidadeFaixas;
}
