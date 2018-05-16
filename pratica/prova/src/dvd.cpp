#include "../include/midia.hpp"
#include "../include/dvd.hpp"
#include <iostream>

Dvd::Dvd(){}

Dvd::~Dvd(){}

std::istream& operator>> (std::istream &i, Dvd &dvd){
    std::cout << "Insira o titulo do dvd: " << '\n';
    i >> dvd.titulo;

    std::cout << "Insira o ano de lancamento do dvd: " << '\n';
    i >> dvd.anoLancamento;

    std::cout << "Insira o diretor do filme: " << '\n';
    i >> dvd.autor;

    std::cout << "Insira a classificacao etária do filme: " << '\n';
    i >> dvd.classificacao;

    std::cout << "Insira a duração do filme em horas: " << '\n';
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
