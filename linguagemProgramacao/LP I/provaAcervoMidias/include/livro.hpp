#ifndef _LIVRO_HPP_
#define _LIVRO_HPP_
#include <string>
#include "midia.hpp"

class Livro : public Midia{
	private:
		std::string editora;
		std::string isbn;
	public:
		Livro();
		~Livro();
		Livro(
			std::string titulo, std::string anoLancamento,
			std::string autor, std::string editora,
			std::string isbn
		);
		friend std::istream& operator >> (std::istream &i, Livro &livro);
		friend std::ostream& operator << (std::ostream &o, Livro &livro);
		void update();
};

#endif
