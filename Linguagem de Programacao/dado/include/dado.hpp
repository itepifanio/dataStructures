#ifndef _DADO_H_
#define _DADO_H_
#include <random>
#include <ostream>

class Dado {
	private:
		int valor;
	public:
		static std::random_device rd;
		static std::mt19937 gen;
		static std::uniform_int_distribution<> dis;
		Dado();
		Dado(int val);
		friend std::ostream& operator<< (std::ostream &o, Dado const &d);
		int jogar();
		int getValor();
		Dado operator+(const Dado &d) const;
		int operator+(const int &val) const;
		// Overloaded do typecast para int
		operator int();
};

#endif
