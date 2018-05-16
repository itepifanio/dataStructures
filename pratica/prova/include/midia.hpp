#ifndef _MIDIA_HPP_
#define _MIDIA_HPP_
#include <string>
#include <vector>

class Midia{
	protected:
		std::string titulo;
		std::string anoLancamento;
		std::string autor;
	public:
		Midia();
		virtual ~Midia();
		virtual void update();
		std::string getTitulo();
};

#endif
