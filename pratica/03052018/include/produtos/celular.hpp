#ifndef _CELULAR_HPP
#define _CELULAR_HPP
#include "../produtoDuravel.hpp"
#include <string>

class Celular : public ProdutoDuravel {
    private:
		float polegadas;
		std::string processador;
        bool rodaClashRoyal;

	public:
		// Criando construtor, pois é obrigado para heranças
		Celular();
};

#endif
