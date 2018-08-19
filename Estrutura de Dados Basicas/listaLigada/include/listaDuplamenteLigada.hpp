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
            inicio = NULL;
            fim = NULL;
            tamanho = 0;
        }

        ~ListaDuplamenteLigada(){
            No<T> *i = inicio;
            while(i != fim){
                i = i->proximo;
                delete i->anterior;
            }
            delete inicio;
            delete fim;

            tamanho = 0;
        }

        void push_back(T valor){
            // No que será inserido
            No<T> *temp = new No<T>;
            temp->valor = valor;
            temp->proximo = NULL;

            // No inicial da lista ligada
            No<T> *i = inicio;

            // Se for não for o primeiro, itera
            // Se for o primeiro adiciona o nó ao valor inicial
            if(inicio != NULL){
                while(i->proximo != NULL){
                    i = i->proximo;
                }

                temp->anterior = i->anterior;
                i->proximo = temp;
            }else{
                temp->anterior = inicio;
                inicio = temp;
            }

            tamanho += 1;
        }

        void print(){
            No<T> *i = inicio;

            if(inicio == NULL && fim == NULL){
                std::cout << "Nenhum elemento na lista" << std::endl;
            }

            while(i != fim){
                std::cout << i->valor << " ";
                i = i->proximo;
            }
            std::cout << std::endl;
        }
};

#endif
