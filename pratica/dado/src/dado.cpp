#include <random>
#include <ostream>
#include <random>
#include <iostream>
#include "../include/dado.hpp"

std::random_device Dado::rd{};
std::mt19937 Dado::gen(Dado::rd());
std::uniform_int_distribution<> Dado::dis(1,6);

Dado::Dado() {
	valor = std::round(dis(gen));
}

Dado::Dado(int val) {
	valor = val;
}

int Dado::jogar() {
	valor = std::round(dis(gen));
	return valor;
}

int Dado::getValor() {
	return valor;
}

std::ostream& operator<< (std::ostream &o, Dado const &d) {
	o << d.valor;
	return o;
}

Dado Dado::operator+(const Dado &d) const {
	return Dado(this->valor+d.valor);
}

int Dado::operator+(const int &val) const {
	return (this->valor+val);
}

Dado::operator int() {
	return valor;
}