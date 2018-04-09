#ifndef _ALBUM_HPP_
#define _ALBUM_HPP_
#include <iostream>
#include <string>
#include <ostream>
using namespace std;

class Album{
    private:
        string nome;
        short tempo;
        string artista;
        float preco;
    public:
        Album(string n, short tmp, string art, float preco);
        void setNome(string n);
        void setTempo(short t);
        void setArtista(string art);
        void setPreco(float p);
        string getNome();
        short getTempo();
        string getArtista();
        float getPreco();
        friend ostream& operator<<(ostream &o, Album const &a);
};

#endif
