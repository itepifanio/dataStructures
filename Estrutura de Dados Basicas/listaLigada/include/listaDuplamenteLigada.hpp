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
            No<T> *temp = new No<T>;
            temp->valor = valor;

            fim->anterior->proximo = temp;
            fim->anterior = temp;
            temp->proximo = fim;

            tamanho += 1;
        }

        void push_front(T valor){
            No<T> *temp = new No<T>;
            temp->valor = valor;

            temp->proximo = inicio->proximo;
            temp->anterior = inicio;
            inicio->proximo = temp;
        
            tamanho += 1;
        }

        void remove_back(){
            if(inicio == NULL && fim == NULL){
                std::cout << "Lista não tem dado a ser removido" << std::endl;
                return;
            }

            No<T> *tmp = new No<T>;
            tmp = fim->anterior;

            delete fim;

            fim = tmp;

            tamanho -= 1;
        }

        void print(){
            No<T> *i = inicio->proximo;

            while(i != fim){
                std::cout << i->valor << " ";
                i = i->proximo;
            }
            std::cout << std::endl;
        }
};

#endif
