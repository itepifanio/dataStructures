#include <iostream>
#include "../include/tempo.hpp"
using namespace std;

int main(){
    Tempo t1(12,0,0);
    Tempo t2;
    //Tempo *t3 = new Tempo();
    /*t2.setHora(12);
    t2.setMinuto(0);
    t2.setSegundo(0);*/

    Tempo t3(t1 + t2);

    cout << "Hora: " << t3.getHora() << endl;
    cout << "Minuto: " << t3.getMin() << endl;
    cout << "Segundo: " << t3.getSegundo() << endl;

}
