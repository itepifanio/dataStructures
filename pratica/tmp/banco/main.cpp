#include <iostream>
#include "contaCorrente.h"
#include "movimentacao.h"
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
      if (opcao == 1){
          float saldo;
          int numero, agencia;

          ContaCorrente conta(1,1,0);
          std::cout << "Digite o saldo inicial:" << std::endl;
          std::cin >> saldo;
          std::cout << "Digite o numero da conta:" << std::endl;
          std::cin >> numero;
          std::cout << "Digite a agência da conta:" << std::endl;
          std::cin >> agencia;

          conta.setSaldo(saldo);
          conta.setNumero(numero);
          conta.setAgencia(agencia);

          v.push_back(&conta);
      }else if(opcao == 2){
        int numero, agencia;
        std::cout << "Digite a agência da conta desejada" << std::endl;
        std::cin >> agencia;
        std::cout << "Digite o número da conta desejada" << std::endl;
        std::cin >> numero;

        for (size_t i = 0; i < (int) v.size(); i++) {
          if(v[i]->getNumero() == numero && v[i]->getAgencia() == agencia){
            //Bug
            delete v[i];
          }
        }
      }else if(opcao == 3){
        int numero, agencia;
        std::cout << "Digite a agência da conta desejada" << std::endl;
        std::cin >> agencia;
        std::cout << "Digite o número da conta desejada" << std::endl;
        std::cin >> numero;

        for (size_t i = 0; i < (int) v.size(); i++) {
          if(v[i]->getNumero() == numero && v[i]->getAgencia() == agencia){
            // A implementar
            v[i]->getSaldo();
          }
        }
      }else if(opcao == 6){
          int numero, agencia;
          std::cout << "Digite a agência da conta desejada" << std::endl;
          std::cin >> agencia;
          std::cout << "Digite o número da conta desejada" << std::endl;
          std::cin >> numero;

          for (size_t i = 0; i < (int) v.size(); i++) {
            if(v[i]->getNumero() == numero && v[i]->getAgencia() == agencia){
              std::cout << v[i]->getSaldo() << std::endl;
            }
          }
      }else if (opcao == 7){

      }else{
        std::cout << "Opção inválida" << std::endl;
      }
    }
}
