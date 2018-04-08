#include "movimentacao.h"
#include <string>
using namespace std;

Movimentacao::Movimentacao(string d, float v, string m){
    this->descricao = d;
    this->valor = v;
    this->movimentacao = m;
};

Movimentacao::~Movimentacao(){

}

void Movimentacao::setDescricao(string d){
    descricao = d;
}

void Movimentacao::setValor(float v){
    valor = v;
}

void Movimentacao::setMovimentacao(string m){
    movimentacao = m;
}

string Movimentacao::getMovimentacao(){
    return movimentacao;
}

float Movimentacao::getValor(){
    return valor;
}

string Movimentacao::getDescricao(){
    return descricao;
}
