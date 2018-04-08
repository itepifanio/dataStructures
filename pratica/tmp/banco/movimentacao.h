#ifndef _MOVIMENTACAO_H_
#define _MOVIMENTACAO_H_
#include <string>
using namespace std;

class Movimentacao{
    private:
        string descricao;
        float valor;
        string movimentacao;
    public:    
        Movimentacao(string descricao, float valor, string movimentacao);
        ~Movimentacao();
        void setDescricao(string d);
        void setValor(float v);
        void setMovimentacao(string m);

        string getDescricao();
        string getMovimentacao();
        float getValor();
};
#endif
