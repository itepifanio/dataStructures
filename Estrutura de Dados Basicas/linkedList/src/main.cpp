#include "../include/list.hpp"

int main() {
  List <int> l;
  l.start = NULL;
  l.push(1);
  l.push(2);
  l.push(3);
  l.push(4);
  l.show();

  return 0;
}
