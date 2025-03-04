#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string *teaName;
    int servings;
    vector<string> ingredients;
    // constructors are made automatically by the compiler and is same name of the class
    //  default constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = new string(name);
        servings = serve;
        ingredients = ingr;
        cout << "Constructor called " << endl;
    }
    // copy con
    Chai(const Chai &other) // const written because we do not want changes in the copy or the other variable/value which holds the values for main class

    {
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << " Copy constructor called " << endl;
    }

    // Destructor
    ~Chai()
    {
        delete teaName;
        cout << "Destructor called" << endl;
    }
    void displayChaiDetails()
    {
        // added a star to teaname to display its value rather than its address
        cout << "Tea name :" << *teaName << endl;
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

    // copy the object
    Chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    *lemonTea.teaName = " Modified Lemon Tea ";

    cout << "lemon tea " << endl;
    lemonTea.displayChaiDetails();

    // data will not be updated
    cout << " Copied Tea " << endl;
    copiedChai.displayChaiDetails();

    return 0;
}