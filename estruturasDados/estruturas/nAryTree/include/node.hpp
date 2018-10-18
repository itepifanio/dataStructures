#ifndef _NO_HPP_
#define _NO_HPP_
#define N 10
#include <cstddef>

template <typename T>
class Node{
    public:
        T data;
        Node<T> *children[N];

        Node(T data){
            this->data = data;

            for (int i = 0; i < N; i++){
                children[i] = NULL;
            }
        }
        ~Node(){
            for (int i = 0; i < N && children[i]; i++){
                delete children[i];
            }
        }
};

#endif
