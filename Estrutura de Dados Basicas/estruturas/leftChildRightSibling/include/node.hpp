#ifndef _NODE_HPP_
#define _NODE_HPP_
#include <iostream>
#include "node.hpp"

template <typename T>
class Node{
    public:
        T value;
        Node<T> *child;
        Node<T> *sibling;
        Node<T>(T value){
            this->value   = value;
            this->child   = NULL;
            this->sibling = NULL;
        }

        Node<T>(){}
};

#endif
