#include "seuraaja.h"
#include <iostream>
#include <string>
using namespace std;

Seuraaja::Seuraaja(string uusi) :nimi(uusi)
{
    // Luo uusi seuraaja
    cout << "Luodaan seuraaja " << uusi << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    // tulosta konsolille saatu viesti
    cout << nimi << " sai viesti: " << viesti << endl;
}
