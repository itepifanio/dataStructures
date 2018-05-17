#include "album.hpp"
#include <ostream>

Album::Album(string nome, short tmp, string art, float preco){
    this->artista = art;
    this->nome = nome;
    this->tempo = tmp;
    this->preco = preco;
}

void Album::setArtista(string art){
    artista = art;
}

void Album::setTempo(short tmp){
    tempo = tmp;
}

void Album::setNome(string n){
    nome = n;
}

void Album::setPreco(float p) {
    preco = p;
}

string Album::getArtista(){
    return artista;
}

string Album::getNome(){
    return nome;
}

short Album::getTempo(){
    return tempo;
}

float Album::getPreco() {
    return preco;
}

ostream& operator<< (ostream &o, Album const &a){
    o << "Album: " << a.nome << endl
      << "Artista: " << a.artista << endl
      << "Tempo: " << a.tempo << endl
      << "Preco: " << a.preco << endl;

    return o;
}

