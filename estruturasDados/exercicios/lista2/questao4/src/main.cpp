#include <string>
#include "../../hashTable/hashTable.hpp"

int main(){
    HashTable <int> h;

    h.adicionar(11);
    h.adicionar(20);
    h.adicionar(18);
    h.adicionar(49);
    h.adicionar(15);

    h.print();

    std::cout << h.find(15) << std::endl;
    std::cout << h.find(49) << std::endl;
    std::cout << h.find(55) << std::endl;

    return 0;
}
