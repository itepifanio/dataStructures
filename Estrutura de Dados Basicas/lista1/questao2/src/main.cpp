#include "../include/conjuntoDePilhas.hpp"

int main() {
  ConjuntoDePilhas <int> l(2);

  l.push(1);
  l.push(2);
  l.push(3);

  l.printConjunto();

  return 0;
}
