#include "notifikaattori.h"
#include <iostream>

Notifikaattori::Notifikaattori() {
    cout << "Notifikaattori konstruktori" << endl;
}

void Notifikaattori::lisaa(Seuraaja * s)
{
    s -> next = seuraajat; //lisätty seuraaja osoittaa vanhaan alkuun
    seuraajat = s; //alku osoittaa uuteen seuraajaan

    cout << "Uusi seuraaja lisatty: " << s->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja * s)
{
    Seuraaja* nyt = seuraajat;
    Seuraaja* edellinen = nullptr;

    while(nyt != nullptr)
    {
        if (nyt == s)
        {
            if (edellinen == nullptr)
            {
                seuraajat = nyt -> next; //Poistetaan ensimmäinen
            }
            else
            {
                edellinen -> next = nyt -> next; //Poistetaan välistä
            }
            return;
        }
        edellinen = nyt;
        nyt = nyt -> next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja* nimi = seuraajat;
    while(nimi != nullptr)
    {
        cout << nimi -> getNimi() << endl;
        nimi = nimi -> next;
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja* kayttaja = seuraajat;
    while(kayttaja != nullptr)
    {
        kayttaja -> paivitys(viesti);
        kayttaja = kayttaja->next;
    }
}
