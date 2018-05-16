#ifndef _LIVRO_HPP_
#define _LIVRO_HPP_
#include <string>
#include "midia.hpp"

class Livro : public Midia{
	private:
		std::string editora;
		int isbn;
	public:
		Livro();
		~Livro();
		void update();
};

#endif
