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
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
        cout << "Parameterized Constructor called " << endl;
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
    Chai lemonTea("lemon Tea ", 3, {"water ", " lemon ", " Honey "});
    lemonTea.displayChaiDetails();
    return 0;
}