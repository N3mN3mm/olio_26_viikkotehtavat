#include "italianchef.h"
#include <iostream>

italianChef::italianChef(string name) : chef(name)
{
    chefName = name;
    cout << "ItalianChef " << chefName << " konstruktori" << endl;
}

italianChef::~italianChef()
{
    cout << "ItalianChef " << chefName << " destruktori" << endl;
}

int italianChef::makePizza(int num1, int num2)
{
    flour = 5;
    water = 5;
    int numOfJauho= num1/flour;
    int numOfVesi= num2/water;
    int numOfPizza;

    if (numOfJauho < numOfVesi) {
        numOfPizza = numOfJauho;
    }
    else {
        numOfPizza = numOfVesi;
    }

    return numOfPizza;
}


bool italianChef::askSecret(string givenPassword, int num1, int num2)
{
    if(givenPassword == password){
        cout << "Password ok!" << endl;
        cout << "ItalianChef " << chefName << " with " << num1 << " flour and " << num2
             << " water can make " << makePizza(num1, num2) << " pizzas" << endl;
        return true;
    }

    else{
        return false;
    }
}

