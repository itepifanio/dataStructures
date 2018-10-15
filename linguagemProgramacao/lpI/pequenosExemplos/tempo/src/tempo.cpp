#include "../include/tempo.hpp"

Tempo::Tempo() {
    hora = 0;
    min = 0;
    segundo = 0;
}

Tempo::Tempo(short h, short m, short s) {
    hora = h;
    min = m;
    segundo = s;
}

void Tempo::setHora(short h){
    hora = h;
}

void Tempo::setMin(short min){
    this->min = min;
}

void Tempo::setSegundo(short s){
    segundo = s;
}

short Tempo::getHora(){
    return hora;
}

short Tempo::getMin(){
    return min;
}

short Tempo::getSegundo(){
    return segundo;
}

Tempo Tempo::operator+(const Tempo &t) const {
    short h = this->hora + t.hora;
    short m = this->min + t.min;
    short s = this->segundo + t.segundo;

    return Tempo(h, m, s);
}
