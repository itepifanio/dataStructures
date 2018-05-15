#ifndef _SECRETARIA_HPP_
#define _SECRETARIA_HPP_
#include <string>
#include "funcionario.hpp"

class Secretaria : public Funcionario{
	private:
		int senha;
	public:
		Secretaria();
		~Secretaria();
		void aumentaSalario();
};

#endif
