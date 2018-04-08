#ifndef _CONTACORRENTE_H_
#define _CONTACORRENTE_H_
#include "movimentacao.h"
#include <vector>

class ContaCorrente{
    private:
        int agencia;
        int numero;
        float saldo;
        // True = conta especial. False = conta normal
        bool status;
        //Apenas em caso de conta especial
        float limite;
    public:
        ContaCorrente(int a, int n, float sal);
        ~ContaCorrente();

        void setAgencia(int a);
        void setNumero(int n);
        void setSaldo(float s);
        void setStatus(bool b);
        void setLimite(float l);
        int getAgencia();
        int getNumero();
        float getSaldo();
        bool getStatus();
        float getLimite();
        std::vector<Movimentacao*> movimentacoes;
};

#endif
