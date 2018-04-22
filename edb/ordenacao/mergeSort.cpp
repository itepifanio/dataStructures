#include <iostream>
#include "../helpers/helpers.hpp"

/**
* Realiza o merge dos subarrays de v
*/
template <typename T>
void merge(T *v, int l, int half, int r){
    int i, j, k, *w;
    w = new int [r-l];
    // Iterator i left
    i = l;
    // Iterator j half
    j = half;
    k = 0;

    while(i < half && j < r){
        if(v[i] <= v[j]){
            w[k++] = v[i++];
        }else{
            w[k++] = v[j++];
        }
    }

    while(i < half){
        w[k++] = v[i++];
    }

    while(j < r){
        w[k++] = v[j++];
    }

    for(i = l; i < r; ++i){
        v[i] = w[i-l];
    }

    delete (w);

}

/** Recebe o vetor e os seguintes tamanhos:
* n é o tamanho total do vetor
* l é o index do lado esquerdo (left)
* r é o index do lado direito (right)
*/
template <typename T>
int mergeSort(T *v, int l, int r){
    if(l < r-1){
        int half = (l + r)/2;

        mergeSort(v, l, half);
        mergeSort(v, half, r);

        merge(v, l, half, r);
    }
}

int main(){
    int n = 10;
    int v[n] = {1,55,33,75,1,0,33,56,12,9};

    mergeSort(v, 0, n);

    for(int i = 0; i < n; i++){
        std::cout << v[i] << '\n';
    }
}
