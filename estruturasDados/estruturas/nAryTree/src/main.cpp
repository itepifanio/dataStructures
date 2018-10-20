#include "../include/nAryTree.hpp"
#include "../include/node.hpp"

int main() {
    // Arvore ternaria com valor 1 na raiz
    NAryTree<int> tree(1, 3);
    tree.addChild(2);
    tree.addChild(3);
    tree.addChild(4);
    //tree.addChild(5);
    tree.print();

    return 0;
}
