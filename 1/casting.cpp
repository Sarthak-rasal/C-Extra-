#include <iostream>
using namespace std;

int main()
{
    float teaPrice = 50.99;
    int roundedTeaPrice = (int)teaPrice;

    int teaQuantity = 2;
    int totalPrice = teaPrice * teaQuantity;
    // using int will loose the precision

    cout << roundedTeaPrice << endl;

    return 0;
}