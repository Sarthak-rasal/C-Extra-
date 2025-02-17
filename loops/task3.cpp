#include <iostream>
using namespace std;
#include <string>
// Write a program that prints the brewing instructions for making 5 cups of tea.
// The brewing process should be printed once for each cup using a for loop.

int main()
{
    int teaCups;
    cout << "Enter the cups of tea : ";
    cin >> teaCups;

    for (int i = 1; i <= teaCups; i++)
    {
        cout << "Brewing cup " << i << " of tea... " << endl;
    }

    return 0;
}