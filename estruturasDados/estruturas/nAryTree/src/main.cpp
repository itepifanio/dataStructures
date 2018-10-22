#include "../include/nAryTree.hpp"
#include "../include/node.hpp"

int main() {
    // Arvore ternaria com valor 1 na raiz
    NAryTree<int> tree(1, 3);

    // Adição
    tree.root->addChild(2, 3);
    tree.root->children[0]->addChild(3,3);
    tree.root->children[0]->addChild(4,3);
    tree.root->addChild(6, 3);

    tree.print();

    // Pesquisa
    Node<int> node = tree.search(2);
    std::cout << '\n';
    std::cout << node.data << '\n';

    return 0;
}
