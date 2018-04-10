#include "movimentacao.h"
#include <string>
using namespace std;

Movimentacao::Movimentacao(string descricao, float valor, string movimentacao){
    this->descricao = descricao;
    this->valor = valor;
    this->movimentacao = movimentacao;
};

Movimentacao::~Movimentacao(){

}

// Funções
std::ostream& operator<<(std::ostream &o, const Movimentacao &movimentacao){
    o << "Descrição: " << movimentacao.descricao << endl
      << "Movimentação: " << movimentacao.movimentacao << endl
      << "Valor: " << movimentacao.valor << endl;

      return o;
}


// Gets e sets
void Movimentacao::setDescricao(string d){
    descricao = d;
}

void Movimentacao::setValor(float v){
    valor = v;
}

void Movimentacao::setMovimentacao(string m){
    movimentacao = m;
}
