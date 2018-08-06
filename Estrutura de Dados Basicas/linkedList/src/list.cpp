#include "<iostream>"
#include "node.hpp"

void List::push(T data){
  Node <int> *tmp = new Node();

  if(this->start == NULL){
    tmp->next   = NULL;
    tmp->data   = data;
    this->start = tmp;

    return;
  }

  Node<int> *i = this->start;
  while(i->next){
    i = i->next;
  }

  tmp->next = NULL;
  tmp->data   = data;
  i->start = tmp;
}

void List::show(){
  Node *i = this->start;
  if (this->start != NULL) {
    std::std::cout << "[";
    while (i) {
      std::cout << i->n  << " ";
      i = i->next;
    }
    std::cout << "]" << std::endl;
  }
}
