#include "../include/nAryTree.hpp"
#include "../include/node.hpp"

int main() {
    NAryTree<int> tree(1);
    tree.addChild(2);
    tree.addChild(3);
    tree.addChild(4);
    tree.print();
    /*
    NAryTree<std::string> tree("food");
    tree.addChild("batata");
    tree.addChild("potato");
    tree.addChild("frenchfrie");
    tree.print();
    */
    return 0;
}
