#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // main constructor

    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;

        cout << "Main Constructor called" << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name : " << teaName << endl;
        cout << "Servings : " << servings << endl;
        cout << "Ingredients : " << endl;
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
    }
    // deligating constructor
    Chai(string name) : Chai(name, 1, {"Water", "Tea leaves"}) {};
};

int main()
{
    Chai quickChai("Quick chai");
    quickChai.displayChaiDetails();

    return 0;
}