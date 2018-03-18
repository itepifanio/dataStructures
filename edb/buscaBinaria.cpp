#include <iostream>
using namespace std;

// Busca binária recursiva
bool buscaBinaria(int *vetor, int chave, int tamanhoVetor){
    if(tamanhoVetor == 0){
        return false;   
    }

    int novoIndice = tamanhoVetor/2; 

	if(vetor[novoIndice] == chave){
		return true;
	}else if(vetor[novoIndice] > chave){
        return buscaBinaria(vetor, chave, novoIndice);
    }else if(vetor[novoIndice] < chave){
        return buscaBinaria(&vetor[novoIndice + 1], chave, tamanhoVetor - novoIndice -1);
    }else{
        return false;
    }
}

int main(){
	int vetor[14] = {1,2,3,4,5,6,11,17,99,100,111,222,255,369};

    int valor;
    
    cout << "Digite o valor a ser pesquisado no array: " << endl;

    cin >> valor;

    bool b = buscaBinaria(vetor, valor, (sizeof(vetor)/sizeof(*vetor)));
    
    cout << b;

    return 0;
}
