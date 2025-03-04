#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chai
{
private:
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    Chai()
    {
        teaName = "Unknown Tea";
        servings = 1;
        ingredients = {"Water", "tea leaves"};
    }

    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }

    // accessing prv variables
    //  getter
    string getTeaName()
    {
        return teaName;
    }
    // setter
    void setTeaName(string name)
    {
        teaName = name;
    }

    // getter  for servings
    int getServings()
    {
        return servings;
    }

    // setter for servings
    void setServings(int serve)
    {
        servings = serve;
    }

    // getter for ingredients
    vector<string> getIngredients()
    {
        return ingredients;
    }
    // setter
    void setIngredients(vector<string> ingr)
    {
        ingredients = ingr;
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
};

int main()
{
    Chai chai;
    chai.setTeaName("Ginger Tea");
}
