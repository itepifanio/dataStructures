#include "../include/nAryTree.hpp"
#include "../include/node.hpp"

int main() {
    // Arvore ternaria com valor 1 na raiz
    NAryTree<int> tree(1, 3);

    tree.root->addChild(2, 3);
    // Bugado quando digito pra outros valores de array
    Node<int> b = tree.search(2);
    b.addChild(3,3);
    tree.print();
/*
    tree.addChild(2);
    tree.addChild(3);
    tree.addChild(4);
*/
    //tree.addChild(5);

/*
    Node<int> node = tree.search(2);

    node.addChild(5, 3);
*/
    //std::cout << node.children[0]->data;
    //std::cout << tree.search(5).data << '\n';
//    std::cout << node.data << '\n';
    return 0;
}
