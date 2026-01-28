#include <iostream>

using namespace std; // standardi kirjasto, ilman tätä esim. count ei toimi
// voitaisiin tehdä myös näin: std::count << "hello world" << std::endl;

int main()
{
    int koe = 5;
    printf("Hello World!\n"); // myös c kielen komento toimii
    cout << "Hello World!" << koe << endl; // tulostaa int arvon testin perään
    return 0;
}
