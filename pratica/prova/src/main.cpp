#include <iostream>

#include "../include/estoque.hpp"
#include "../include/midia.hpp"
#include "../include/dvd.hpp"
#include "../include/cd.hpp"

int main(){
    Estoque *estoque = new Estoque();

    // Construindo acervo padrão
    Cd cd1("Carnaval", "2015", "Ventre", "Balaclava", 11);
    Cd cd2("Gorduratrans", "2015", "Gorduratrans", "Balaclava", 7);

    estoque->inserirMidia(cd1);
    estoque->inserirMidia(cd2);

    /*
    // Instanciando novo valor
    Midia *midiaDvd = new Dvd();
    Dvd *dvd = (Dvd*)(midiaDvd);
    std::cin >> *dvd;
    //std::cout << *dvd;

    estoque->inserirMidia(*dvd);
    //estoque->editarMidia(dvd->getTitulo());
    */

    estoque->listaMidia();

    //estoque->removerMidia(dvd->getTitulo());

    return 0;
}
