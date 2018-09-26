#include <iostream>

void insertSort(int *v, int n){
    for(int i = 0; i < n; i++){
        int elem = v[i];
        int j = i;

        while(j > 0 && v[j-1] < elem){
            v[j] = v[j-1];
            j--;
        }

        v[j] = elem;
    }
}

int main(){
    int n = 10;
    int v[n] = {1,55,33,75,1,0,33,56,12,9};

    insertSort(v, n);

    for(int i = 0; i < n; i++){
        std::cout << v[i] << std::endl;
    }
}
