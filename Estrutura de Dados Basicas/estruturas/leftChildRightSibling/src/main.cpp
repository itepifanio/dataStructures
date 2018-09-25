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
/*
	// Search
	for (int i = 0; i < 11; ++i){
    std::cout << '\n';
    int value;
    std::cin >> value;
    auto node = tree->search_node(value);
    
    if (node != NULL)
        std::cout << node->value << std::endl;
    else
        std::cout << "valor nao encontrado\n";
    
    }
*/
	// Remove
	tree->remove(5);

	// Imprime
	std::cout << "\n";
    tree->print();
	std::cout << "\n";

	// Realiza pesquisa		    
/*	std::cout << '\n';
    int value;
    std::cin >> value;

    if(tree->search(value)) {
        std::cout << "Numero existe\n";
    } else {
        std::cout << "Numero nao existe\n";
    }

	// Retorna altura da árvore
    std::cout<< tree->height() << std::endl;
*/
    return 0;
}
