#include <iostream>
#include <string>
using namespace std;

// Abstract class
class Tea
{
public:
    virtual void prepareIngredients() = 0; // pure virtual fun
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// derived

class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready" << endl;
    }
    void brew() override
    {
        cout << "Green Tea brewed" << endl;
    }
    void serve() override
    {
        cout << "Green Tea served" << endl;
    }
};
class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Spices,Tea leaves and water is ready" << endl;
    }
    void brew() override
    {
        cout << "Masala Tea brewed" << endl;
    }
    void serve() override
    {
        cout << "Masala Tea served" << endl;
    }
};

int main()
{
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}
