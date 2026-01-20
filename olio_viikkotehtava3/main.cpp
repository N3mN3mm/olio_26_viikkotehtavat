#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    chef olio1("Gordon");

    cout<< "Chef " << olio1.getName() << " with 11 items can make salad " << olio1.makeSalad(11) << " portions" << endl;
    cout<< "Chef " << olio1.getName() << " with 14 items can make salad " << olio1.makeSoup(14) << " portions" << endl;

    italianChef olio2("Mario");

    cout<< "Chef " << olio2.getName() << " with 9 items can make salad " << olio1.makeSalad(9) << " portions" << endl;

    olio2.askSecret("pizza", 12, 12);

    return 0;
}
