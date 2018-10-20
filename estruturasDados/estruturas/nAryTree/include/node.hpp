#ifndef _NO_HPP_
#define _NO_HPP_
#include <vector>
#include <ostream>

template <typename T>
class Node{
    public:
        T data;
        std::vector<Node*> children;

        Node(T data){
            this->data = data;
        }

        ~Node(){
            children.clear();
        }

        void addChild(T data, int n){
            Node<T> *newNode = new Node<T>(data);

            if((int)this->children.size() < n){
                this->children.push_back(newNode);
            }else{
                std::cout << "Nó lotado" << std::endl;
            }
        }

        void print(){
            std::cout << std::endl;
            std::cout << data << std::endl;
        }

};

#endif
