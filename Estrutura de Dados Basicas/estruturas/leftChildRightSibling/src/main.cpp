#include "../include/leftChildRightSibling.hpp"
#include "../include/node.hpp"


int main() {
    // Left child right sibling
    /*  10
    *    |
    *    2 -> 3 -> 4 -> 5
    *              |    |
    *              6    7 -> 8 -> 9  */
    LeftChildRightSibling<int> *tree = new LeftChildRightSibling<int>(10);

    tree->pushChild(2);
    tree->pushChild(3);
    Node<int> *n3 = tree->pushChild(4);
    tree->pushChild(6, n3);
    Node<int> *n4 = tree->pushChild(22,n3);
    tree->pushChild(24, n4);
    Node<int> *n5 = tree->pushChild(5);
    tree->pushChild(7, n5);
    tree->pushChild(8, n5);
    tree->pushChild(9, n5);

    tree->print();
    std::cout << '\n';
    int value;
    std::cin >> value;

    if(tree->search(value)) {
        std::cout << "Numero existe\n";
    } else {
        std::cout << "Numero nao existe\n";
    }
    std::cout<<tree->heightt(tree->root)<<std::endl;

    return 0;
}
