#include <string>
#include "contaCorrente.h"
#include "movimentacao.h"
using namespace std;

std::vector<Movimentacao*> movimentacoes;

ContaCorrente::ContaCorrente(int agencia, int numero, float saldo){
    this->agencia = agencia;
    this->numero  = numero;
    this->saldo   = saldo;
}

ContaCorrente::~ContaCorrente(){

};
// Métodos
void ContaCorrente::adicionaMovimentacao(Movimentacao m){
    movimentacoes.push_back(&m);
}

// Gets e sets
void ContaCorrente::setAgencia(int agencia){
    this->agencia = agencia;
}

void ContaCorrente::setNumero(int numero){
    this->numero = numero;
}

void ContaCorrente::setSaldo(float saldo){
    this->saldo = saldo;
}

int ContaCorrente::getAgencia(){
    return agencia;
}

int ContaCorrente::getNumero(){
    return numero;
}

float ContaCorrente::getSaldo(){
    return saldo;
}
