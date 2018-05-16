#include <iostream>

#include "../include/estoque.hpp"
#include "../include/midia.hpp"
#include "../include/dvd.hpp"

int main(){
    Estoque *estoque = new Estoque;

    Midia *midiaDvd = new Dvd;
    Dvd *dvd = (Dvd*) midiaDvd;

    std::cin >> *dvd;
    std::cout << *dvd;

    estoque->inserirMidia(*dvd);
    estoque->editarMidia(dvd->getTitulo());
    estoque->removerMidia(dvd->getTitulo());


    return 0;
}
