#include <iostream>
#include <vector>

#include "../include/produto.hpp"
#include "../include/produtoNaoDuravel.hpp"
#include "../include/produtoDuravel.hpp"
#include "../include/deposito.hpp"


void preencherProduto(Produto *produto){
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

    produto->setNome(nome);
    produto->setPreco(preco);
    produto->setMarca(marca);
    produto->setDescricao(descricao);
    produto->setDataFabricacao(dataFabricacao);
}

int main(){

    Deposito *deposito = new Deposito;

    int opcao = 1;
    while(opcao != 0){
        std::cout << "Digite 0 para sair" << std::endl
        << "Digite 1 para adicionar produto duravel" << std::endl
        << "Digite 2 para adicionar produto não duravel" << std::endl
        << "Digite 3 para remover produto" << std::endl
        << "Digite 4 para informar número de produtos no depósito" << std::endl
        << "Digite 5 para informar produto de maior valor" << std::endl;
        std::cin >> opcao;

        switch(opcao){
            case 0:
                break;
            case 1:
                {
                    std::string materialPredominante, durabilidade;

                    Produto *produto = new Produto;
                    preencherProduto(produto);

                    ProdutoDuravel *produtoDuravel = (ProdutoDuravel*)(produto);

                    std::cout << "Digite o material predominante" << std::endl;
                    std::cin >> materialPredominante;
                    std::cout << "Digite a durabilidade do produto" << std::endl;
                    std::cin >> durabilidade;

                    produtoDuravel->setDurabilidade(durabilidade);
                    produtoDuravel->setMaterialPredominante(materialPredominante);

                    // Bug do segmentation aqui
                    deposito->adicionaProduto(*produto);
                }
                break;
            case 2:
                {
                    std::string genero, dataValidade;

                    Produto *produto = new Produto;
                    preencherProduto(produto);

                    ProdutoNaoDuravel *produtoNaoDuravel = (ProdutoNaoDuravel*)(produto);

                    std::cout << "Digite o genero do produto" << std::endl;
                    std::cin >> genero;
                    std::cout << "Digite a validade do produto" << std::endl;
                    std::cin >> dataValidade;

                    produtoNaoDuravel->setGenero(genero);
                    produtoNaoDuravel->setDataValidade(dataValidade);

                    deposito->adicionaProduto(*produto);
                }
                break;
            case 3:
                {
                    std::string nomeProduto;
                    std::cout << "Digite o nome do produto " << std::endl;
                    std::cin >> nomeProduto;

                    deposito->removeProduto(nomeProduto);
                }
                break;
            case 4:
                {
                    deposito->quantidadeProduto();
                }
                break;
            case 5:
                {
                    deposito->maiorValor();
                }
                break;
            default:
                std::cout << "Opção inválida" << std::endl;
        }

    }

}
