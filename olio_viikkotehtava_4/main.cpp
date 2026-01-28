#include <iostream>
using namespace std;
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main() // koodin testausta, kommentiksi laitettu pankkitili ja luottotili testaukset
{
   /* Pankkitili tili("FI123456");
    cout << "Alkusaldo: " << tili.getBalance() << endl;

    cout << "\nTallennetaan 100 euroa" << endl;
    tili.deposit(100);
    cout << "Saldo nyt: " << tili.getBalance() << endl;

    cout << "\nYritetään tallettaa -50 euroa" << endl;
    tili.deposit(-50);
    cout << "Saldo nyt: " << tili.getBalance() << endl;

    cout << "\nNostetaan 40 euroa" << endl;
    tili.withdraw(40);
    cout << "Saldo nyt: " << tili.getBalance() << endl;

    // Liian suuri nosto
    cout << "\nYritetään nostaa 500 euroa" << endl;
    tili.withdraw(500);
    cout << "Saldo nyt: " << tili.getBalance() << endl;


    Luottotili tili2("FI12345", 500);

    cout << "Alkusaldo: " << tili2.getBalance() << endl;

    cout << "\nNostetaan 200 euroa" << endl;
    tili2.withdraw(200);
    cout << "Saldo nyt: " << tili2.getBalance() << endl;

    cout << "\nYritetaan nostaa 400 euroa" << endl;
    tili2.withdraw(400);
    cout << "Saldo nyt: " << tili2.getBalance() << endl;

    cout << "\nNostetaan 300 euroa" << endl;
    tili2.withdraw(300);
    cout << "Saldo nyt: " << tili2.getBalance() << endl;

    cout << "\nMaksetaan velkaa 100 euroa" << endl;
    tili2.deposit(100);
    cout << "Saldo nyt: " << tili2.getBalance() << endl;

    cout << "\nMaksetaan velkaa 1000 euroa" << endl;
    tili2.deposit(1000);
    cout << "Saldo nyt: " << tili2.getBalance() << endl;

    cout << "\nYritetaan nostaa -50 euroa" << endl;
    tili2.withdraw(-50);
    cout << "Saldo nyt: " << tili2.getBalance() << endl;

    cout << "\nYritetaan maksaa -20 euroa" << endl;
    tili2.deposit(-20);
    cout << "Saldo nyt: " << tili2.getBalance() << endl; */


    Asiakas henkilo("Sirkka", 500);

    cout << "Asiakkaan nimi: " << henkilo.getNimi() << endl;
    henkilo.showSaldo();

    cout << "\nTallennetaan 100 euroa kayttotilille" << endl;
    henkilo.talletus(100);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nYritetään tallettaa -50 euroa kayttotilille" << endl;
    henkilo.talletus(-50);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nNostetaan 40 euroa kayttotililta" << endl;
    henkilo.nosto(40);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    // Liian suuri nosto
    cout << "\nYritetään nostaa 500 euroa kayttotililta" << endl;
    henkilo.nosto(500);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nNostetaan luottoa 200 euroa" << endl;
    henkilo.luotonNosto(200);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nYritetaan nostaa luottoa 400 euroa" << endl;
    henkilo.luotonNosto(400);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nNostetaan luottoa 300 euroa" << endl;
    henkilo.luotonNosto(300);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nMaksetaan velkaa 100 euroa" << endl;
    henkilo.luotonMaksu(100);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nMaksetaan velkaa 1000 euroa" << endl;
    henkilo.luotonMaksu(1000);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nYritetaan nostaa luottoa -50 euroa" << endl;
    henkilo.luotonNosto(-50);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    cout << "\nYritetaan maksaa velkaa -20 euroa" << endl;
    henkilo.luotonMaksu(-20);
    cout << "Saldo nyt: ";
    henkilo.showSaldo();

    Asiakas henkilo2("Pekka", 600);
    cout << "Pekan tili: " << endl;
    henkilo2.showSaldo();
    henkilo2.talletus(300);
    cout << "\n300 euroa Pekalle" << endl;
    henkilo2.showSaldo();
    henkilo2.tiliSiirto(100, henkilo);
    cout << "\n100 euroa Sirkalle" << endl;
    cout << "\nSirkan tili: " << endl;
    henkilo.showSaldo();
    cout << "\nPekan tili: " << endl;
    henkilo2.showSaldo();

    return 0;

}
