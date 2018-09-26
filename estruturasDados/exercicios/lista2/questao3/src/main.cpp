#include <string>
#include "../../listaLigada/listaDuplamenteLigada.hpp"

template <typename T>
ListaDuplamenteLigada <T> merge(ListaDuplamenteLigada <T> *l, ListaDuplamenteLigada <T> *ll){
    l->fim->anterior->proximo = ll->inicio->proximo;
    ll->inicio->proximo->anterior = l->fim->anterior;
    l->fim = ll->fim;
    l->tamanho += ll->tamanho;

    return *l;
}

int main(){
    ListaDuplamenteLigada <int> l;
    ListaDuplamenteLigada <int> ll;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ListaDuplamenteLigada <int> tmp = merge(&l, &ll);

    tmp.print();

    return 0;
}
