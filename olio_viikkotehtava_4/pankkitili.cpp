#include "pankkitili.h"
#include <iostream>


Pankkitili::Pankkitili(string tilinumero)
{
    omistaja = tilinumero;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double tulo)
{
    if(tulo > 0)
    {
        saldo = saldo + tulo;
        return true;
    }

    else
    {
        cout<<"ERROR can't deposit negative numbers"<<endl;
        return false;
    }

}

bool Pankkitili::withdraw(double meno)
{
    if (meno <= 0)
    {
        cout << "ERROR can't withdraw negative numbers" << endl;
        return false;
    }

    else if (saldo >= meno)
    {
        saldo = saldo - meno;
        return true;
    }

    else
    {
        cout << "ERROR not enough balance" << endl;
        return false;
    }
}
