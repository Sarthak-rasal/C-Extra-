#include <iostream>
using namespace std;

// Pass by reference
void pourchai(int &cups)
{
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