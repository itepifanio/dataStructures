#ifndef _OPERARIO_HPP_
#define _OPERARIO_HPP_
#include <string>
#include "funcionario.hpp"

class Operario : public Funcionario{
	private:
		std::string fabrica;
	public:
		Operario();
};

#endif

