#include <iostream>

void swap(int *v, int a, int b){
    int tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
}

void selectionSort(int *v, int n, int i = 0, int j = 0){
    if (i < n - 1){
        if (j < n){
            if(v[i] > v[j]){
                swap(v, i, j);
            }
            selectionSort(v, n, i, j+1);
        }
        selectionSort(v, n, i+1, i+1);
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
