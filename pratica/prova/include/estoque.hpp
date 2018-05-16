#ifndef _ESTOQUE_H_
#define _ESTOQUE_H_
#include "midia.hpp"
#include "../include/dvd.hpp"

class Estoque{
	private:
		std::vector<Midia*> midias;
	public:
		Estoque();
		~Estoque();
		void inserirMidia(Midia &midia);
		void removerMidia(std::string titulo);
		void editarMidia(std::string titulo);
		void listaMidia();
};

#endif
