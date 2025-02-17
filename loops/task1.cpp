#include <iostream>
using namespace std;
// Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining.
// The loop should run until all cups are served.

int main()
{
    int teaCups;

    cout << " Enter the number of tea cups : ";
    cin >> teaCups;

    while (teaCups > 0)
    {
        cout << "Serving tea :-) " << endl
             << "Remaining tea cups are : " << teaCups << endl;
        teaCups--;
    }

    cout << "Tea out of stock :-( ";
    return 0;
}