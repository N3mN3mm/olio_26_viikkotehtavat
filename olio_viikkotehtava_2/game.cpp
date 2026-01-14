#include "game.h"
#include <iostream>
#include <cstdlib>

using namespace std;


game::game(int max)
{
    maxNumber = max;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
    srand(20);
    int satunnaisluku = rand()%maxNumber;
    randomNumber=satunnaisluku;

}

game::~game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void game::play()
{
    int luku = 0;
    int arvaukset = 0;

    while(luku!=randomNumber)
    {
        cout<< "Give a guess between 1-" << maxNumber << ": ";
        cin>>luku;
        arvaukset++;

        if(randomNumber>luku)
        {
            cout<<"Your guess is too small"<<endl;
        }

        else if(randomNumber<luku)
        {
            cout<<"Your guess is too big"<<endl;
        }

    }

    if(randomNumber == luku)
    {
        cout<< "Your guess is right! Answer: "<< randomNumber << endl;
    }

    numOfGuesses=arvaukset;

    cout<< "You guessed the right answer with " << numOfGuesses << " guesses" << endl;
}
