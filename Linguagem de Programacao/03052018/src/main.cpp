#include <iostream>
#include <vector>

#include "../include/produto.hpp"
#include "../include/produtoNaoDuravel.hpp"
#include "../include/produtoDuravel.hpp"
#include "../include/deposito.hpp"
#include "../include/produtos/carro.hpp"
#include "../include/produtos/pizza.hpp"

int main(){
    Deposito *deposito = new Deposito;

    std::cout << "Adicionando carro ao deposito" << '\n';

    Produto *carro = new Carro;
    carro->setNome("Mustang");
    carro->setPreco(100000);

    deposito->adicionaProduto(*carro);
    // Informa quantidade de produtos
    deposito->quantidadeProduto();


    std::cout << "Adicionando pizza ao deposito" << '\n';

    Produto *pizza = new Pizza;
    pizza->setNome("Pizza");
    pizza->setPreco(27);

    deposito->adicionaProduto(*pizza);
    deposito->quantidadeProduto();

    deposito->maiorValor();

    std::cout << "Removendo pizza" << '\n';
    deposito->removeProduto("pizza");

    deposito->quantidadeProduto();
}
