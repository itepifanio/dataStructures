#include "../include/minStack.hpp"

int main() {
  MinStack <int> l;

  l.push(10);
  l.push(11);
  l.push(7);
  l.remove();
  l.push(15);

  std::cout << l.getMin();

  return 0;
}
