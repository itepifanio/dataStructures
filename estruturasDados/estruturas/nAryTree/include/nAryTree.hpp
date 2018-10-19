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
        
        void addChild(T data){
            this->root->addChild(data, this->n);
        }

        void printTree(Node<T> *newNode){
            if(! newNode){ return; }

            std::cout << newNode->data << " ";

            for(int i = 0; i < (int)newNode->children.size() && newNode->children[i]; i++){
                printTree(newNode->children[i]);
            }
        }

        void print(){
            printTree(this->root);
        }
};

#endif
