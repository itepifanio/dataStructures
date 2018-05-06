#include "../include/produtoDuravel.hpp"

ProdutoDuravel::ProdutoDuravel(){}

/*
ProdutoDuravel::ProdutoDuravel(
    std::string nome, float preco, std::string marca,
    std::string descricao, std::string dataFabricacao,
    std::string materialPredominante, std::string durabilidade
)
{
    this->nome = nome;
    this->preco = preco;
    this->marca = marca;
    this->descricao = descricao;
    this->dataFabricacao = dataFabricacao;
    this->materialPredominante = materialPredominante;
    this->durabilidade = durabilidade;
}
*/

void ProdutoDuravel::setMaterialPredominante(std::string materialPredominante){
    this->materialPredominante = materialPredominante;
}

void ProdutoDuravel::setDurabilidade(std::string durabilidade){
    this->durabilidade = durabilidade;
}
