#include "chef.h"
#include <iostream>

chef::chef(string name)
{
    chefName = name;
    cout << "Chef " << chefName << " konstruktori" << endl;
}

chef::~chef()
{
    cout << "Chef " << chefName << " destruktori" << endl;
}

string chef::getName()
{
    return chefName;
}

int chef::makeSalad(int num)
{
    int salad = 5;
    int numOfSalads = num/salad;
    return numOfSalads;
}

int chef::makeSoup(int num)
{
    int soup = 3;
    int numOfSoups = num/soup;
    return numOfSoups;
}
