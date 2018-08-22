#ifndef _CONJUNTO_DE_PILHAS_HPP_
#define _CONJUNTO_DE_PILHAS_HPP_
#include "../../../listaLigada/listaDuplamenteLigada.hpp"
#include <vector>

template <typename T>
class ConjuntoDePilhas{
    private:
        int tamanhoMaxPilha;
    public:
        std::vector<ListaDuplamenteLigada<T>> conjuntoDePilhas;

        ConjuntoDePilhas(int tamanhoMaxPilha){
            this->tamanhoMaxPilha = tamanhoMaxPilha;

            ListaDuplamenteLigada<T> nova;

            conjuntoDePilhas.push_back(nova);
        }

        bool full(ListaDuplamenteLigada<T> &l){
            return l.tamanho >= this->tamanhoMaxPilha;
        }

        void printConjunto(){
            conjuntoDePilhas[0].print();

            for(int i = 0; i < (int)conjuntoDePilhas.size(); i++){
                conjuntoDePilhas[i].print();
            }
        }

        void push(T valor){
            // Percorre o conjunto de pilhas
            for(int i = 0; i < (int)conjuntoDePilhas.size(); i++){
                // Se o index estiver não tiver cheio eu dou
                // push na pilha
                // Se estiver cheio crio uma nova pilha
                if(! full(conjuntoDePilhas[i])){
                    std::cout << "pushou" << '\n';
                    conjuntoDePilhas[i].push_front(valor);
                }else{
                    std::cout << "criou nova pilha" << '\n';
                    ListaDuplamenteLigada<T> nova;

                    conjuntoDePilhas.push_back(nova);
                }
            }
        }
};

#endif
