#include <iostream>
#include "../helpers/helpers.hpp"

void bubbleSort(int *v, int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if(v[j] < v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main(){
    int n = 10;
    int v[n] = {1,55,33,75,1,0,33,56,12,9};

    bubbleSort(v, n);

    for(int i = 0; i < n; i++){
        std::cout << v[i] << std::endl;
    }
}
