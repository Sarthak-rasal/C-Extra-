#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userTea;
    int teaQuantity;

    cout << "which tea will you have \n ";
    getline(cin, userTea);

    // ask for quantity

    cout << "how many cups of " << userTea << " would you like to have :";
    cin >> teaQuantity;

    cout << teaQuantity << " ";
    cout << userTea << " order placed";

    return 0;
}