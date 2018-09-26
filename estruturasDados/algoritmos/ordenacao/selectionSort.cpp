#include <iostream>
#include "../helpers/helpers.hpp"

void selectionSort(int *v, int n){
    for (int j = 0; j < n; j++){
        int imin = j;
        for(int i = j + 1; i < n; i++){
            if(v[i] < v[imin]){
                imin = i;
            }
        }
        swap(v[imin], v[j]);
    }
}

int main(){
    int n = 10;
    int v[n] = {1,55,33,75,1,0,33,56,12,9};

    selectionSort(v, n);

    for(int i = 0; i < n; i++){
        std::cout << v[i] << std::endl;
    }
}
