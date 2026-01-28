#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>
using namespace std;

class italianChef : public chef
{
public:
    italianChef(string);
    ~italianChef();
    bool askSecret(string, int, int);
private:
    string password = "pizza";
    int flour;
    int water;
    int makePizza(int, int);
};

#endif // ITALIANCHEF_H
