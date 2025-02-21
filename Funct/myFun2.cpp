#include <iostream>
#include <string>
using namespace std;

// Pass by value

void pourchai(int supermancups)
{
    supermancups = supermancups + 5;
    cout << "Cups we poured : " << supermancups << endl;
}

int main()
{

    int chaiCups = 2;
    pourchai(chaiCups);
    cout << "Total cups ordered were " << chaiCups << endl;

    return 0;
}