#include <iostream>
#include "../helpers/helpers.hpp"

template <typename T>
int partition(T *v, int begin, int end){
    // Recupera último índice como pivô
    int pivot = v[end];
    int i = begin - 1;

    for(int j = begin; j <= end-1; j++){
        if(v[j] <= pivot){
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[end]);

    return (i+1);
}

template <typename T>
void quickSort(T *v, int begin, int end){
    if(begin < end){
        int pivo = partition(v, begin, end);
        quickSort(v, begin, pivo-1);
        quickSort(v, pivo + 1, end);
    }

}

int main(){
    int n = 10;
    int v[n] = {1,55,33,75,1,0,33,56,12,9};

    quickSort(v, 0, n);

    for(int i = 0; i < n; i++){
        std::cout << v[i] << std::endl;
    }
}
