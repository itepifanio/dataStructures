#ifndef _BUSCABINARIA_HPP_
#define _BUSCABINARIA_HPP_

#include <iostream>

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

#endif
