#include "../include/estoque.hpp"
#include <iostream>
#include <string>

Estoque::Estoque(){}

Estoque::~Estoque(){}

void Estoque::inserirMidia(Midia midia){
	for(size_t i = 0; i < this->midias.size(); i++){
			if(this->midias[i].getTitulo().compare(midia.getTitulo()) == 0){
				std::cout << "Midia já cadastrada" << std::endl;
				return;
			}
	}

	this->midias.push_back(midia);
}
