#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chai
{
private:
    string teaName;
    int servings;

public:
    Chai(string name, int serve)
    {
        teaName = name;
        servings = serve;
    }
    friend bool compareServings(const Chai &chai1, const Chai &chai2);

    void display() const
    {
        cout << "teaName: " << teaName << endl;
    }
};

bool compareServings(const Chai &chai1, const Chai &chai2)
{
    return chai1.servings < chai2.servings;
}

int main()
{

    Chai masalaChai("Masala Chai", 4);
    Chai gingerChai("Ginger Chai", 8);

    masalaChai.display();
    gingerChai.display();

    if (compareServings(masalaChai, gingerChai))
    {
        cout << " masala chai is having less servings " << endl;
    }
    else
    {
        cout << " ginger chai is having less servings " << endl;
    }

    return 0;
}