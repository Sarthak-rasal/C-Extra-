#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    // data members
    string teaName;
    int servings;
    vector<string> ingredients;

    // member functions

    void displayChaiDetails()
    {
        cout << "Tea name :" << teaName << endl;
        cout << "Tea servings :" << servings << endl;
        cout << "Ingredients :";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main()
{
    // class name should always be in capital and object name should always be in lower case

    Chai chaiOne;

    chaiOne.teaName = "lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "lemon", "Honey ", "Tea"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 5;
    chaiTwo.ingredients = {"Water", "Dalchini", "elaichi", "Tea"};

    chaiTwo.displayChaiDetails();

    return 0;
}