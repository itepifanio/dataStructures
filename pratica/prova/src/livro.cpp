#include "../include/midia.hpp"
#include "../include/livro.hpp"
#include <iostream>
#include <string>

Livro::Livro(){}

Livro::~Livro(){}

void Livro::update(){
    std::string titulo, anoLancamento, autor;
    std::string editora;
    int isbn;

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

    this->titulo = titulo;
    this->anoLancamento = anoLancamento;
    this->autor = autor;
    this->editora = editora;
    this->isbn = isbn;
}
