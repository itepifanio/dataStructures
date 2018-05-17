#include "../include/deposito.hpp"
#include <iostream>

void Deposito::adicionaProduto(Produto produto){
    this->produtos.push_back(produto);
}

void Deposito::removeProduto(std::string nomeProduto){
    int cont = 0;

    for(std::size_t i = 0, max = produtos.size(); i != max; ++i){
        if(this->produtos[i].nome == nomeProduto){
             cont += 1;
        }
    }

    this->produtos.erase(this->produtos.begin() + (cont-1));
}

void Deposito::quantidadeProduto(){
    std::cout << "Existem " << produtos.size() <<
    " itens em estoque" << std::endl;
}

void Deposito::maiorValor(){
    int maior = 0;

    for(std::size_t i = 0; i < this->produtos.size(); i++){
        if(this->produtos[i].preco > this->produtos[maior].preco){
            maior = i;
        }

    }

    std::cout <<  "O produto com maior valor é " <<
    this->produtos[maior].nome  << " que vale " <<
    this->produtos[maior].preco << " golpes "   << std::endl;
}
