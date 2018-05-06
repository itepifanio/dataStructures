#include "../include/produto.hpp"
#include "../include/produtoNaoDuravel.hpp"
#include "../include/produtoDuravel.hpp"
#include <iostream>
#include <vector>

template <typename T>
void preencherProduto(T& produto){
    std::string nome, marca, descricao, dataFabricacao;
    float preco;

    std::cout << "Digite o nome produto" << std::endl;
    std::cin >> nome;
    std::cout << "Digite o preco do produto" << std::endl;
    std::cin >> preco;
    std::cout << "Digite a marca do produto" << std::endl;
    std::cin >> marca;
    std::cout << "Digite a descricao do produto" << std::endl;
    std::cin >> descricao;
    std::cout << "Digite a data de fabricação do produto" << std::endl;
    std::cin >> dataFabricacao;

    produto.setNome(nome);
    produto.setPreco(preco);
    produto.setMarca(marca);
    produto.setDescricao(descricao);
    produto.setDataFabricacao(dataFabricacao);
}

int main(){
    std::vector<Produto> produtos;

    int opcao = 1;
    while(opcao != 0){
        std::cout << "Digite 0 para sair" << std::endl
        << "Digite 1 para adicionar produto duravel" << std::endl
        << "Digite 2 para adicionar produto não duravel" << std::endl
        << "Digite 3 para remover produto duravel" << std::endl
        << "Digite 4 para remover produto não duravel" << std::endl
        << "Digite 5 para informar número de produtos no depósito" << std::endl
        << "Digite 6 para informar produto de maior valor" << std::endl;
        std::cin >> opcao;

        if(opcao == 1){
                std::string materialPredominante, durabilidade;

                ProdutoDuravel produto;

                preencherProduto<ProdutoDuravel>(produto);

                std::cout << "Digite o material predominante" << std::endl;
                std::cin >> materialPredominante;
                std::cout << "Digite a durabilidade do produto" << std::endl;
                std::cin >> durabilidade;

                produto.setDurabilidade(durabilidade);
                produto.setMaterialPredominante(materialPredominante);
        }

    }

}
