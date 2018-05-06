#include "produtoNaoDuravel.hpp"

ProdutoNaoDuravel::ProdutoNaoDuravel(){}

ProdutoNaoDuravel::ProdutoNaoDuravel(
    std::string nome, float preco, std::string marca,
    std::string descricao, std::string dataFabricacao,
)
{
    this->nome = nome;
    this->preco = preco;
    this->marca = marca;
    this->descricao = descricao;
    this->dataFabricacao = dataFabricacao;
}

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
