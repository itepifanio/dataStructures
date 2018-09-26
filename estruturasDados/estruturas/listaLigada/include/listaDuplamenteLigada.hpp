#ifndef _LISTA_DUPLAMENTE_LIGADA_HPP_
#define _LISTA_DUPLAMENTE_LIGADA_HPP_
#include "no.hpp"
#include <iostream>

template <typename T>
class ListaDuplamenteLigada {
    public:
        No<T> *inicio;
        No<T> *fim;
        int tamanho;

        ListaDuplamenteLigada(){
            inicio = new No<T>;
            fim = new No<T>;
            inicio->proximo = fim;
            fim->anterior = inicio;
            tamanho = 0;
        }

        ~ListaDuplamenteLigada(){
            No<T> *i = inicio->proximo;
            while(i != fim){
                i = i->proximo;
                delete i->anterior;
            }
            delete inicio;
            delete fim;

            tamanho = 0;
        }

        void push_back(T valor){
            No<T> *tmp = new No<T>;
            tmp->valor = valor;
            No<T> *anterior = fim->anterior;

            anterior->proximo = tmp;
            fim->anterior = tmp;
            tmp->proximo = fim;
            tmp->anterior = anterior;

            tamanho += 1;
        }
        
        void push_front(T valor){
            No<T> *temp = new No<T>;
            temp->valor = valor;

            if(inicio->proximo == fim || fim->anterior == inicio){
                inicio->proximo = temp;
                temp->anterior = inicio;
                temp->proximo = fim;
                fim->anterior = temp;
            }else{
                temp->proximo = inicio->proximo;
                temp->anterior = inicio;
                inicio->proximo = temp;
            }

            tamanho += 1;
            return;
        }

        void push_front(T valor){
            No<T> *temp = new No<T>;
            temp->valor = valor;

            if(inicio->proximo == fim || fim->anterior == inicio){
                inicio->proximo = temp;
                temp->anterior = inicio;
                temp->proximo = fim;
                fim->anterior = temp;
            }else{
                temp->proximo = inicio->proximo;
                temp->anterior = inicio;
                inicio->proximo = temp;
            }

            tamanho += 1;
        }

        void remove_back(){
            if((inicio == NULL && fim == NULL) || (inicio == fim)){ return; }

            if(inicio != fim && fim->anterior != inicio){
                No<T> *anterior = fim->anterior->anterior;

                delete fim->anterior;
                anterior->proximo = fim;
                fim->anterior = anterior;

                tamanho -= 1;
            }else if(tamanho == 1){
                delete fim->anterior;
                fim->anterior = inicio;

                tamanho -= 1;
            }else{
                std::cout << "Nenhum elemento a ser removido" << '\n';
            }
        }

        void print(){
            No<T> *i = inicio->proximo;

            for(int j = 0; j < tamanho; j++){
                std::cout << i->valor << " ";
                i = i->proximo;
            }

            if (tamanho < 0) {
                std::cout << "Nenhum elemento na lista" << '\n';
            }else{
                std::cout << std::endl;
            }
        }
};

#endif
