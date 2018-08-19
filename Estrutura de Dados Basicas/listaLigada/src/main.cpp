#include "../include/listaLigadaSimples.hpp"
#include "../include/listaDuplamenteLigada.hpp"

int main() {
  //ListaLigada <int> *l = new ListaLigada<int>;
  ListaDuplamenteLigada <int> *l = new ListaDuplamenteLigada<int>;
  l->push_back(1);
  l->push_back(2);
  l->push_back(3);
  l->push_back(4);
  l->print();
  l->push_front(0);
  l->print();
  //delete l;
  //std::cout << l->tamanho;
  return 0;
}
