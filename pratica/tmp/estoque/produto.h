#ifndef _PRODUTO_H_
#define _PRODUTO_H_
#include <iostream>
#include <string>
#include <ostream>
using namespace std;

class Produto{
    private:
        int codigo;
        string descricao;
    public:
        void setCodigo(int cod);
        void setDescricao(string desc);
        int getCodigo();
        string getDescricao();
        Produto(int cod, string desc);
        friend ostream& operator<<(ostream &out, Produto const &p);
};

#endif
