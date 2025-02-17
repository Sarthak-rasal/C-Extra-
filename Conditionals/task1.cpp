#include <iostream>
#include <string>
using namespace std;

// Write a program that asks the user for their favorite tea.
// If they choose "Oolong," print a message saying, "You have excellent taste!"

int main()
{
    string favTea;

    cout << "Enter your favorite coffee !!";
    cin >> favTea;

    if (favTea == "affogato")
    {
        cout << "Damn you have good taste";
    }
    else
    {
        cout << favTea << " Order placed ";
    }

    return 0;
}