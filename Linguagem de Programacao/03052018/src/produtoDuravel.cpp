#include "../include/produtoDuravel.hpp"

ProdutoDuravel::ProdutoDuravel(){}

void ProdutoDuravel::setMaterialPredominante(std::string materialPredominante){
    this->materialPredominante = materialPredominante;
}

void ProdutoDuravel::setDurabilidade(std::string durabilidade){
    this->durabilidade = durabilidade;
}
