#include <iostream>
#include "list.hpp"

template <class T>
class Node{
  public:
    T data;
    Node<T> *next;
};
