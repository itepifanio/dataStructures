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
            while(i->proximo){
                i = i->proximo;
                delete i;
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

        void push_front(T valor){
            // No que será inserido
            No<T> *temp = new No<T>;
            temp->valor = valor;
            temp->proximo = NULL;

            if(inicio == NULL){
                inicio = temp;
            }else{
                temp->proximo = inicio;
                inicio = temp;
            }

            tamanho += 1;
        }

        void remove_back(){
            if(inicio == NULL) return;

            No<T> *i = inicio;

            for(int j = 1; j < tamanho-1; j++){
                i = i->proximo;
            }

            delete i->proximo;
            i->proximo = NULL;

            tamanho -= 1;
        }

        void remove_front(){
            if(inicio == NULL) return;

            No<T> *i = inicio;
            inicio = i->proximo;


            delete i;
            i = NULL;

            tamanho -= 1;
        }

        void print(){
            No<T> *i = inicio;

            if(inicio == NULL){
                std::cout << "Nenhum elemento na lista" << std::endl;
            }

            while(i){
                std::cout << i->valor << " ";
                i = i->proximo;
            }
            std::cout << std::endl;
        }
};
