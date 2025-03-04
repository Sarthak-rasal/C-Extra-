#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;
    // constructors are made automatically by the compiler and is same name of the class
    //  default constructor
    Chai()
    {
        teaName = "unknown tea";
        servings = 1;
        ingredients = {"Water ", " Tea blend "};
        cout << "Constructor called ";
    }
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
    Chai defaultchai;
    defaultchai.displayChaiDetails();

    return 0;
}