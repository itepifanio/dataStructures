#include "../include/estoque.hpp"
#include <iostream>
#include <string>

Estoque::Estoque(){}

Estoque::~Estoque(){}

void Estoque::inserirMidia(Midia &midia){
	for(std::size_t i = 0; i < this->midias.size(); i++){
		if(this->midias[i]->getTitulo().compare(midia.getTitulo()) == 0){
			std::cout << "Midia já cadastrada" << std::endl;
			return;
		}
	}

	this->midias.push_back(&(midia));
}

void Estoque::removerMidia(std::string titulo){
	int cont = 0;

	for(std::size_t i = 0; i < this->midias.size(); i++){
		++cont;
		if(this->midias[i]->getTitulo().compare(titulo) == 0){
			this->midias.erase(this->midias.begin() + (cont-1));
			std::cout << "Midia removida " << std::endl;
			break;
		}
	}
}

void Estoque::editarMidia(std::string titulo){
	for(std::size_t i = 0; i < this->midias.size(); i++){
		if(this->midias[i]->getTitulo().compare(titulo) == 0){
			this->midias[i]->update();
			std::cout << "Midia atualizada " << std::endl;
			break;
		}
	}
}
void Estoque::listaMidia(){
	if(this->midias.size() <= 0){
		std::cout << "Nenhuma midia a ser listada" << std::endl;
		return;
	}

	for(std::size_t i = 0; i < this->midias.size(); i++){
		if(dynamic_cast<Dvd*>(this->midias[i])){
			std::cout <<
				*dynamic_cast<Dvd*>(this->midias[i])
			<< std::endl;
		}else if(dynamic_cast<Cd*>(this->midias[i])){
			std::cout <<
				*dynamic_cast<Cd*>(this->midias[i])
			<< std::endl;
		}else if(dynamic_cast<Livro*>(this->midias[i])){
			std::cout <<
				*dynamic_cast<Livro*>(this->midias[i])
			<< std::endl;
		}
	}
}
