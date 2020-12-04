#pragma once

#include "Human.hpp"

#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

vector <char> foo (list <Human> &lista)
    
{
       
    string imie;
    unsigned int wiek;
    bool pies;
    bool kot;

    char Tak = 'y';
    char Nie = 'n';

    Human czlowiek = Human(imie, wiek, pies, kot);

    char znak = 'y';
    int rozmiar = lista.size();
    int element_listy = 0;

    vector <char> Preferencje; //(rozmiar, znak);
    Preferencje.resize(rozmiar);
    vector <char>::reverse_iterator it_wektor = Preferencje.rbegin();

    char biezacy_znak;
    lista.reverse();

    for (list <Human>::iterator it_lista = lista.begin(); it_lista != lista.end(); it_lista++) 
    { 
       if (it_lista->isMonster() != true) biezacy_znak = Tak;
       else biezacy_znak = Nie;
       Preferencje[element_listy] = biezacy_znak;
       it_lista->birthday();
       element_listy++;
    }

    return (Preferencje);
    
}
