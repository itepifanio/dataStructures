#include <string>
#include "contaCorrente.h"
using namespace std;

ContaCorrente::ContaCorrente(int a, int n, float sal){
    this->agencia = a;
    this->numero  = n;
    this->saldo   = sal;
//    this->status  = s;
//    this-> limite = l;
}

ContaCorrente::~ContaCorrente(){

};

void ContaCorrente::setAgencia(int a){
    agencia = a;
}

void ContaCorrente::setNumero(int n){
    numero = n;
}

void ContaCorrente::setSaldo(float s){
    saldo = s;
}

void ContaCorrente::setStatus(bool s){
    status = s;
}

void ContaCorrente::setLimite(float l){
    limite = l;
}

void addMovimentacoes(ContaCorrente c, Movimentacao m){
    c.movimentacoes.push_back(&m);
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

bool ContaCorrente::getStatus(){
    return status;
}

float ContaCorrente::getLimite(){
    return limite;
}
