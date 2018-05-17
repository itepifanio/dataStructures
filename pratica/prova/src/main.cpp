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

    Dvd dvd1("Clockwork Orange", "1971", "Stanley Kubrick", 16, 2.1);
    Dvd dvd2("The Godfather", "1972", "Francis Ford Coppola", 16, 2.8);

    Livro livro1("Assombro", "2016","Chuck Palahniuk", "Leya", "9788544104835");
    Livro livro2("1984", "1949","George Orwell", "Harvill Secker", "indisponivel");

    estoque->inserirMidia(cd1);
    estoque->inserirMidia(cd2);
    estoque->inserirMidia(dvd1);
    estoque->inserirMidia(dvd2);
    estoque->inserirMidia(livro1);
    estoque->inserirMidia(livro2);

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
