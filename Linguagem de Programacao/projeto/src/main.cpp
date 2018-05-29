#include <iostream>
#include <string>
#include "../include/sapos.hpp"
using namespace std;

int main(){
	// Sapos preparados para corrida
	Sapo s1("sapo1", 10);
	Sapo s2("sapo2", 11);
	Sapo s3("sapo3", 9);
	// Corrida de 100m
	Sapo::distanciaAPercorrer = 100;



  while (true) {
    // Cada vez que o sapo pula uma nova distancia foi percorrida
    s1.pular();
    s2.pular();
    s3.pular();

    if(s1.getDistancia() > Sapo::distanciaAPercorrer){
      std::cout << s1.getIdentificador() << " Ganhou com " << s1.getQuantPulo() << " pulos" << endl;
      return 0;
    }else if(s2.getDistancia() > Sapo::distanciaAPercorrer){
      std::cout << s2.getIdentificador() << " Ganhou com " << s2.getQuantPulo() << " pulos" << endl;
      return 0;
    }else if(s2.getDistancia() > Sapo::distanciaAPercorrer){
      std::cout << s3.getIdentificador() << " Ganhou com " << s3.getQuantPulo() << " pulos" << endl;
      return 0;
    }

  }

	return 0;
}
