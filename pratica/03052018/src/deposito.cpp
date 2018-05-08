#include "../include/deposito.hpp"
#include <iostream>

void Deposito::adicionaProduto(Produto produto){
    this->produtos.push_back(produto);
}

void Deposito::removeProduto(Produto produto){
    int cont;

    for(std::size_t i = 0, max = produtos.size(); i != max; ++i){
        if(this->produtos[i].nome == produto.nome){
             cont += 1;
        }
    }

    this->produtos.erase(this->produtos.begin() + cont);
}

void Deposito::quantidadeProduto(){
    std::cout << "Existem " << produtos.size() <<
    " itens em estoque" << std::endl;
}

void Deposito::maiorValor(){
    int maior = 0;

    for(std::size_t i = 0, max = produtos.size(); i != max; ++i){
        if(this->produtos[i].preco > this->produtos[maior].preco){
            maior = i;
        }
    }

    std::cout << "O produto com maior valor é " <<
    this->produtos[maior].nome << " que vale " <<
    this->produtos[maior].preco << std::endl;
}
