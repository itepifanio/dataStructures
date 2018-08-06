#include <iostream>
#include "node.hpp"

template <class T>
class List{
  public:
    Node<T> *start;

    LinkedList();
    ~LinkedList();
    void push(T data);
    void show();
};
