#include "../include/produtoNaoDuravel.hpp"

ProdutoNaoDuravel::ProdutoNaoDuravel(){}

void ProdutoNaoDuravel::setDataValidade(std::string dataValidade){
    this->dataValidade = dataValidade;
}

void ProdutoNaoDuravel::setGenero(std::string genero){
    this->genero = genero;
}
