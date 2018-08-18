#include "../include/listaLigadaSimples.hpp"

int main() {
  ListaLigada <int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);
  l.push_back(4);
  l.print();
  delete(l);
  std::cout << l.tamanho;
  return 0;
}
