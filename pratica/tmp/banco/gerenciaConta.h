#ifndef _GERENCIACONTA_H_
#define _GERENCIACONTA_H_

#include <iostream>
#include "contaCorrente.h"
#include "movimentacao.h"
#include <string>
#include <vector>

/*
ContaCorrente recuperaConta(){

  int numero, agencia;

  ContaCorrente conta(1,1,0);
  std::cout << "Digite o numero da conta:" << std::endl;
  std::cin >> numero;
  std::cout << "Digite a agência da conta:" << std::endl;
  std::cin >> agencia;

  return conta;
}*/

ContaCorrente adicionaConta(){
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

  return conta;
}

void deletaConta(std::vector<ContaCorrente*> v){
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
}

void realizaSaque(std::vector<ContaCorrente*> &v){
    int numero, agencia;
    float valorSaque;

    std::cout << "Digite a agência da conta desejada" << std::endl;
    std::cin >> agencia;
    std::cout << "Digite o número da conta desejada" << std::endl;
    std::cin >> numero;

    for (size_t i = 0; i < (int) v.size(); i++) {
        if(v[i]->getNumero() == numero && v[i]->getAgencia() == agencia){
            std::cout << "Digite o valor a ser sacado" << std::endl;
            std::cin >> valorSaque;
            if(valorSaque <= v[i]->getSaldo()){
                Movimentacao saque("Saque", 0, "Débito");
                saque.setValor(valorSaque);
                saque.setMovimentacao("Débito");
                saque.setDescricao("Saque");

                float novoSaldo = v[i]->getSaldo() - valorSaque;

                v[i]->adicionaMovimentacao(saque);

                v[i]->setSaldo(novoSaldo);

                std::cout << "Saque realizado com sucesso" << std::endl;
            }else{
                std::cout << "Valor inválido. Verifique se existe saldo disponível em sua conta" << std::endl;
            }
        }
    }
}

void emiteSaldo(std::vector<ContaCorrente*> &v){
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
}

#endif
