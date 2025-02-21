#include <iostream>
using namespace std;

int globalChaiStocks = 100; // scope of this variable is global

// Pass by reference (we add a "&" symbol before parameter)
void pourchai(int &cups)
{
    int test = 9; // scope of this variable is local to this function only
    cups = cups + 5;
    cout << "Cups we poured : " << cups << endl;
}

int main()
{

    int chaiCups = 2;
    pourchai(chaiCups);
    cout << "Total cups ordered were " << chaiCups << endl;

    return 0;
}