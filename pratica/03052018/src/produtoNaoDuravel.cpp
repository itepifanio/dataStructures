#include "../include/produtoNaoDuravel.hpp"

ProdutoNaoDuravel::ProdutoNaoDuravel(){}

/*
ProdutoNaoDuravel::ProdutoNaoDuravel(
    std::string nome, float preco, std::string marca,
    std::string descricao, std::string dataFabricacao,
    std::string dataValidade, std::string genero
)
{
    this->nome = nome;
    this->preco = preco;
    this->marca = marca;
    this->descricao = descricao;
    this->dataFabricacao = dataFabricacao;
    this->dataValidade = dataValidade;
    this->genero = genero;
}
*/

void ProdutoNaoDuravel::setDataValidade(std::string dataValidade){
    this->dataValidade = dataValidade;
}

void ProdutoNaoDuravel::setGenero(std::string genero){
    this->genero = genero;
}
