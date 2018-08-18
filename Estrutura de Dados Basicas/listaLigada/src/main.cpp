#include "../include/listaLigadaSimples.hpp"

int main() {
  ListaLigada <int> *l = new ListaLigada<int>;
  l->push_back(1);
  l->push_back(2);
  l->push_back(3);
  l->push_back(4);
  l->push_front(0);
  l->push_front(-1);
  l->push_front(-2);
  l->push_front(-3);
  l->push_front(-4);
  l->print();
  l->remove_back();
  l->remove_back();
  l->remove_front();
  l->remove_front();
  l->print();
  //delete l;
  //std::cout << l->tamanho;
  return 0;
}
