#include "../include/produto.hpp"

void Produto::setNome(std::string nome){
    this->nome = nome;
}

void Produto::setPreco(float preco){
    this->preco = preco;
}

void Produto::setMarca(std::string marca){
    this->marca = marca;
}
void Produto::setDescricao(std::string descricao){
    this->descricao = descricao;
}

void Produto::setDataFabricacao(std::string dataFabricacao){
    this->dataFabricacao = dataFabricacao;
}
