#ifndef _N_ARY_TREE_HPP_
#define _N_ARY_TREE_HPP_
#include <string>
#include <iostream>
#include "node.hpp"

template <typename T>
class NAryTree{
    public:
        Node<T> *root;
        int n;

        NAryTree(T data, int n){
            this->n = n;
            this->root = new Node<T>(data);
        }

        ~NAryTree(){
            delete this->root;
        }

        // Inicializo o contador de 2 para contar a raiz e o último nível
        // (o último nível não tem filhos, mas tem de ser contado)
        int depth(Node<T> *newNode, int d = 2){
            if(! newNode){ return -1; }

            if(! newNode->children.empty()){
                d += 1;
            }

            for(int i = 0; i < (int)newNode->children.size() && newNode->children[i]; i++){
                depth(newNode->children[i]);
            }

            return d;
        }

        void printTree(Node<T> *newNode){
            if(! newNode){ return; }

            std::cout << newNode->data << " ";

            for(int i = 0; i < (int)newNode->children.size() && newNode->children[i]; i++){
                printTree(newNode->children[i]);
            }
        }

        Node<T> searchTree(T data, Node<T> *newNode){
            if(! newNode){ return NULL; }

            if(newNode->data == data){
                return newNode->data;
            }

            for(int i = 0; i < (int)newNode->children.size() && newNode->children[i]; i++){
                if(newNode->children[i]->data == data){
                    return *newNode->children[i];
                }

                searchTree(data, newNode->children[i]);
            }

            return NULL;
        }

        Node<T> search(T data){
            return searchTree(data, this->root);
        }

        void print(){
            printTree(this->root);
        }
};

#endif
