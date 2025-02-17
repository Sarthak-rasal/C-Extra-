#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Challenge: Write a program that allows a user to input the number of tea bags they have.
    // Assign additional bags to them based on certain conditions
    //(e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators

    int teaBags;
    cout << "Enter the number of tea bags you have : ";
    cin >> teaBags;

    if (teaBags < 10)
    {
        // teabags = teabags + 5
        teaBags += 5;
    }
    cout << "Your total bags are : " << teaBags;

    return 0;
}