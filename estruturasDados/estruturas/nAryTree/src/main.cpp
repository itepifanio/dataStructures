#include "../include/nAryTree.hpp"
#include "../include/node.hpp"

int main() {
    /*  1
        |
        2 - 6
        |
        3 - 4 */

    NAryTree<int> tree(1, 3);

    // Construindo árvore
    tree.root->addChild(2, 3);
    tree.root->children[0]->addChild(3,3);
    tree.root->children[0]->addChild(4,3);
    tree.root->addChild(6, 3);

    std::cout << std::endl;
    std::cout << "Imprimindo a árvore:" << std::endl;

    tree.print();

    // Pesquisa
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Pesquisando valor" << std::endl;

    Node<int> node = tree.search(2);
    std::cout << node.data << std::endl;

    // Altura
    std::cout << std::endl;
    std::cout << "Calculando altura da árvore" << std::endl;

    std::cout << tree.depth(tree.root) << std::endl;

    // Deletando
    tree.remove(node);

    std::cout << std::endl;
    std::cout << "Imprimindo a árvore após remover nó:" << std::endl;
    tree.print();
    std::cout << std::endl;

    return 0;
}
