#include "../include/midia.hpp"
#include "../include/dvd.hpp"
#include <iostream>
#include <string>

// Construtores

Dvd::Dvd(){}

Dvd::~Dvd(){}

Dvd::Dvd(
    std::string titulo, std::string anoLancamento,
    std::string autor, int classificacao,
    float duracao
){
    this->autor = autor;
    this->titulo = titulo;
    this->duracao = duracao;
    this->classificacao = classificacao;
    this->anoLancamento = anoLancamento;
}

// Sobrecargas de operadores iostream

std::istream& operator>> (std::istream &i, Dvd &dvd){
    std::cout << "Insira o titulo do dvd: " << std::endl;
    i >> dvd.titulo;

    std::cout << "Insira o ano de lancamento do dvd: " << std::endl;
    i >> dvd.anoLancamento;

    std::cout << "Insira o diretor do filme: " << std::endl;
    i >> dvd.autor;

    std::cout << "Insira a classificacao etária do filme: " << std::endl;
    i >> dvd.classificacao;

    std::cout << "Insira a duração do filme em horas: " << std::endl;
    i >> dvd.duracao;

    return i;
}

std::ostream& operator<< (std::ostream &o, Dvd &dvd){
    o <<
    "Informações sobre o DVD: "              << std::endl <<
                                                std::endl <<
    "Filme: "           << dvd.titulo        << std::endl <<
    "Lancamento: "      << dvd.anoLancamento << std::endl <<
    "Diretor: "         << dvd.autor         << std::endl <<
    "Classificação: "   << dvd.classificacao << std::endl <<
    "Duração: "         << dvd.duracao       << std::endl <<
                                                std::endl;
    return o;
}

// Métodos

void Dvd::update(){
    std::string titulo, anoLancamento, autor;
    int classificacao;
    float duracao;

    std::cout << "Insira o titulo do dvd: " << std::endl;
    std::cin >> titulo;

    std::cout << "Insira o ano de lancamento do dvd: " << std::endl;
    std::cin >> anoLancamento;

    std::cout << "Insira o diretor do filme: " << std::endl;
    std::cin >> autor;

    std::cout << "Insira a classificacao etária do filme: " << std::endl;
    std::cin >> classificacao;

    std::cout << "Insira a duração do filme em horas: " << std::endl;
    std::cin >> duracao;

    this->titulo = titulo;
    this->anoLancamento = anoLancamento;
    this->autor = autor;
    this->classificacao = classificacao;
    this->duracao = duracao;
}
