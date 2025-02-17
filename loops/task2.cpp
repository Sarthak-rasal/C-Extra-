#include <iostream>
using namespace std;
#include <string>
// Create a program that asks the user if they want more tea.
// Keep asking them until they type "no" (case-insensitive), using a do-while loop.

int main()
{
    string response;
    do
    {
        cout << "Do You want more Tea (yes/no) :";
        cin >> response;

    } while (response != "no");

    return 0;
}