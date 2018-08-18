#include <iostream>

template <typename T>
class No{
    public:
        T valor;
        No<T> *proximo;
        No(){}
        ~No(){}
};

template <typename T>
class ListaLigada {
    public:
        No<T> *inicio;
        int tamanho;

        ListaLigada(){
            inicio = NULL;
            tamanho = 0;
        }

        ~ListaLigada(){
            No<T> *i = inicio;
            No<T> *j = new No<T>;

            while(i){
                j = i;
                i = i->proximo;
                delete j;
            }

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

                i->proximo = temp;
            }else{
                inicio = temp;
            }

            tamanho += 1;
        }

        void print(){
            No<T> *i = inicio;
            while(i){
                std::cout << i->valor << " ";
                i = i->proximo;
            }
            std::cout << std::endl;
        }
};
