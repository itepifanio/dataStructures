#ifndef _N_ARY_TREE_HPP_
#define _N_ARY_TREE_HPP_
#include <string>
#include <iostream>
#include "node.hpp"

template <typename T>
class NAryTree{
    public:
        Node<T> *root;

        NAryTree(T data){
            this->root = new Node<T>(data);
        }

        ~NAryTree(){
            delete this->root;
        }

        int getN(){
            return (sizeof(this->root->children)/sizeof(*this->root->children));
        }

        void addChild(T data){
            Node<T> *newNode = new Node<T>(data);

            for(int i = 0; i < this->getN(); i++){
                if(this->root->children[i] == NULL){
                    this->root->children[i] = newNode;
                    return;
                }
            }
        }

        void printTree(Node<T> *newNode, std::string &s){
            if(! this->root){ return; }

            std::cout << newNode->data << " ";

            for(int i = 0; i < this->getN() && newNode->children[i]; i++){
                printTree(newNode->children[i], s);
            }
        }

        void print(){
            std::string s;
            printTree(this->root, s);

            std::cout << s << '\n';
        }
};

#endif
