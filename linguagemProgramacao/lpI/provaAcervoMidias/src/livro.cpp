#include "../include/midia.hpp"
#include "../include/livro.hpp"
#include <iostream>
#include <string>

// Construtores

Livro::Livro(){}

Livro::~Livro(){}

Livro::Livro(
    std::string titulo, std::string anoLancamento,
    std::string autor, std::string editora,
    std::string isbn
){
    this->isbn = isbn;
    this->autor = autor;
    this->titulo = titulo;
    this->editora = editora;
    this->anoLancamento = anoLancamento;
}

// Sobrecargas de operadores iostream

std::istream& operator>> (std::istream &i, Livro &livro){
    std::cout << "Insira o titulo do livro: " << std::endl;
    i >> livro.titulo;

    std::cout << "Insira o ano de lancamento do livro: " << std::endl;
    i >> livro.anoLancamento;

    std::cout << "Insira o escritor do livro: " << std::endl;
    i >> livro.autor;

    std::cout << "Insira a editora do livro: " << std::endl;
    i >> livro.editora;

    std::cout << "Insira o isbn do livro: " << std::endl;
    i >> livro.isbn;

    return i;
}

std::ostream& operator<< (std::ostream &o, Livro &livro){
    o <<
    "Informações sobre o livro: "           << std::endl <<
                                             std::endl <<
    "Filme: "      << livro.titulo        << std::endl <<
    "Lancamento: " << livro.anoLancamento << std::endl <<
    "Escritor: "   << livro.autor         << std::endl <<
    "Editora: "    << livro.editora       << std::endl <<
    "Isbn: "       << livro.isbn          << std::endl <<
                                             std::endl;

    return o;
}

// Métodos

void Livro::update(){
    std::string titulo, anoLancamento, autor;
    std::string editora;
    std::string isbn;

    std::cout << "Insira o titulo do livro: " << std::endl;
    std::cin >> titulo;

    std::cout << "Insira o ano de lancamento do livro: " << std::endl;
    std::cin >> anoLancamento;

    std::cout << "Insira o autor do livro: " << std::endl;
    std::cin >> autor;

    std::cout << "Insira a editora do livro: " << std::endl;
    std::cin >> editora;

    std::cout << "Insira o isbn do livro em horas: " << std::endl;
    std::cin >> isbn;

    this->isbn = isbn;
    this->autor = autor;
    this->titulo = titulo;
    this->editora = editora;
    this->anoLancamento = anoLancamento;
}
