#include <iostream>
#include <string>
#include "sapos.h"
using namespace std;

int main(){
  // Sapos preparados para corrida
  Sapo s1("sapo1", 10);
	Sapo s2("sapo2", 11);
	Sapo s3("sapo3", 9);
  // Corrida de 100m
	Sapo::distanciaAPercorrer = 100;

  int distSapo[3] = {0,0,0};

  while (true) {
    // Cada vez que o sapo pula uma nova distancia foi percorrida
    distSapo[0] += s1.pular();
    distSapo[1] += s2.pular();
    distSapo[2] += s3.pular();

    if(distSapo[0] > Sapo::distanciaAPercorrer){
      std::cout << s1.getIdentificador() << " Ganhou com " << s1.getQuantPulo() << " pulos" << endl;
      return 0;
    }else if(distSapo[1] > Sapo::distanciaAPercorrer){
      std::cout << s2.getIdentificador() << " Ganhou com " << s2.getQuantPulo() << " pulos" << endl;
      return 0;
    }else if(distSapo[2] > Sapo::distanciaAPercorrer){
      std::cout << s3.getIdentificador() << " Ganhou com " << s3.getQuantPulo() << " pulos" << endl;
      return 0;
    }

  }

	return 0;
}
