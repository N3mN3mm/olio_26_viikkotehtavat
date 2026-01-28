#include "luottotili.h"
#include <iostream>


Luottotili::Luottotili(string tilinumero, double raja):Pankkitili(tilinumero)
{
    luottoRaja = raja;
    omistaja = tilinumero;
}

bool Luottotili::deposit(double maksu)
{
    if(maksu <= 0)
    {
        cout << "ERROR can't deposit negative numbers" << endl;
        return false;
    }

    saldo = saldo + maksu;

    if(saldo > 0)
    {
        saldo = 0; //saldo ei saa mennä plussalle
    }

    return true;
}

bool Luottotili::withdraw(double otto)
{
    if(otto <= 0)
    {
        cout << "ERROR can't withdraw negative numbers" << endl;
        return false;
    }

    else if(saldo - otto > -luottoRaja)
    {
        saldo = saldo - otto;
        return true;
    }

    cout << "ERROR credit limit reached" << endl;
    return false;
}
