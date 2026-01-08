#include <iostream>
#include <cstdlib>

using namespace std;

int game(int maxnum);

int main()
{
    cout<< game(40) <<endl;

    return 0;
}

int game(int maxnum)
{
    srand(20);
    int satunnaisluku = rand()%maxnum;
    int luku = 0;
    int arvaukset = 0;

    while(luku!=satunnaisluku)
    {
        cout<< "arvaa luku: ";
        cin>>luku;
        arvaukset++;

        if(satunnaisluku>luku)
        {
            cout<<"liian pieni"<<endl;
        }

        else if(satunnaisluku<luku)
        {
            cout<<"liian suuri"<<endl;
        }

    }

    if(satunnaisluku == luku)
    {
        cout<< "oikein"<<endl;
    }

    return arvaukset;
}
