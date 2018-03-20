#include <iostream>
#include <string>
#include "sapos.h"
using namespace std;

int main(){
    const string sapo1 = "sapo1";
    const string sapo2 = "sapo2";
    const string sapo3 = "sapo3";

	Sapo s1(sapo1, 10, 5);
	Sapo s2(sapo2, 11, 4);
	Sapo s3(sapo3, 9, 6);
	
	Sapo::distanciaAPercorrer = 100;

		

	return 0;
}
