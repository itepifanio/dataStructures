#include "produto.h"
#include <ostream>
#include <iostream>
using namespace std;

Produto::Produto(int cod, string desc){
    this->descricao = desc;
    this->codigo = cod;
}

void Produto::setDescricao(string desc){
    descricao = desc;
}

void Produto::setCodigo(int cod){
    codigo = cod;
}

string Produto::getDescricao(){
    return descricao;
}

int Produto::getCodigo(){
    return codigo; 
}

ostream& operator<<(ostream &out, Produto const &p){
    out << "Codigo: " << p.codigo << "| Descricao: " << p.descricao;
    return out;
}
