#include <iostream>
#include "contaCorrente.h"
#include "movimentacao.h"
#include "gerenciaConta.h"
#include <string>
#include <vector>

int main(){
    std::vector<ContaCorrente*> v;
    int opcao = 1;
    while(opcao != 0){
        std::cout << std::endl;
        std::cout << "Digite 1 para criar conta" << std::endl;
        std::cout << "Digite 2 para excluir conta" << std::endl;
        std::cout << "Digite 3 para realizar saque" << std::endl;
        std::cout << "Digite 4 para depositar" << std::endl;
        std::cout << "Digite 5 para transferir" << std::endl;
        std::cout << "Digite 6 para emitir saldo" << std::endl;
        std::cout << "Digite 7 para emitir extrato" << std::endl;
        std::cout << "Digite 0 para sair" << std::endl;
        std::cin >> opcao;
        std::cout << std::endl;

        if (opcao == 1){
            ContaCorrente conta = adicionaConta();

            v.push_back(&conta);
        }else if(opcao == 2){
            deletaConta(v);
        }else if(opcao == 3){
            realizaSaque(v);
        }else if(opcao == 6){
            emiteSaldo(v);
        }else if (opcao == 7){
            //ContaCorrente conta = recuperaConta();

            //std::vector <Movimentacao*> movimentacoes = conta.movimentacoes;
            int numero, agencia;

            std::cout << "Digite o numero da conta:" << std::endl;
            std::cin >> numero;
            std::cout << "Digite a agência da conta:" << std::endl;
            std::cin >> agencia;

            for (size_t i = 0; i < (int) v.size(); i++) {
                std::cout << "Entrou no for" << std::endl;
                if(v[i]->getNumero() == numero && v[i]->getAgencia() == agencia){
                    std::cout << "Entrou no if" << std::endl;
                    for (size_t j = 0; j < (int) v[j]->movimentacoes.size(); i++) {
                            std::cout << v[j]->movimentacoes[j] << std::endl;
                    }
                }
            }


        }else{
            if(opcao != 0){
                std::cout << "Opção inválida" << std::endl;
            }
        }
    }
}
