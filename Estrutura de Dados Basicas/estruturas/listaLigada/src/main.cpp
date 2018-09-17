#include "../include/listaLigadaSimples.hpp"
#include "../include/listaDuplamenteLigada.hpp"

int main() {
  //ListaLigada <int> *l = new ListaLigada<int>;
  ListaDuplamenteLigada <int> *l = new ListaDuplamenteLigada<int>;
  l->push_back(1);
  l->push_front(0);
  l->print();
  l->remove_back();
  l->remove_back();
  l->push_front(0);
  l->push_back(1);
  l->remove_back();
  l->remove_back();
  l->remove_back();
  std::cout << l->tamanho << '\n';
  l->print();
  //delete l;
  return 0;
}
