#include "asiakas.h"
#include <iostream>
using namespace std;



Asiakas::Asiakas(string tilinumero, double luottoraja) : kayttotili(tilinumero), luottotili(tilinumero, luottoraja)
{
    nimi = tilinumero;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Käyttötilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double arvo)
{
    return kayttotili.deposit(arvo);
}

bool Asiakas::nosto(double arvo)
{
    return kayttotili.withdraw(arvo);
}

bool Asiakas::luotonMaksu(double arvo)
{
    return luottotili.deposit(arvo);
}

bool Asiakas::luotonNosto(double arvo)
{
    return luottotili.withdraw(arvo);
}

bool Asiakas::tiliSiirto(double summa, Asiakas & kohde)
{
    if(kayttotili.withdraw(summa))
    {
        kohde.kayttotili.deposit(summa);
        return true;
    }

    else if(summa <= 0)
    {
        cout << "ERROR can't transfer negative numbers" << endl;
        return false;
    }

    else
    {
        cout << "ERROR not enough money" << endl;
        return false;
    }
}
