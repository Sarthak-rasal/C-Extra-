#include <iostream>
#include <vector>
#include <string>

using namespace std;

// base class or parent class
class Tea
{
protected:
    string teaName;
    int servings;

public:
    // constructor
    Tea(string name, int serve)
    {
        teaName = name;
        servings = serve;
        cout << "Tea constructor called " << teaName << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << endl;
    }
    virtual void serve() const
    {
        cout << "Serving " << servings << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int servings) : Tea("Green Tea ", servings)
    {
        cout << "Green tea constructor called " << endl;
    }

    void brew() const override
    {
        cout << "Brewing" << teaName << " by steeping green tea leaves " << endl;
    }

    ~GreenTea()
    {
        cout << "Green tea destructor called " << endl;
    }
};

class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        cout << " MasalaTea constructor called " << endl;
    }

    // this is the final override fun after this brew cannot be overriden
    // for this particular class which is MasalaTea;

    void brew() const override final
    {
        cout << "Brewing" << teaName << " by spices and milk " << endl;
    }

    ~MasalaTea()
    {
        cout << "Masala tea destructor called  ";
    }
};

// class SpicyMasalaTea : public MasalaTea{
//     public:
//     void brew()const override{
//         cout << "Brewing " << teaName << " with spices";
//     }

// };

int main()
{

    Tea *tea1 = new GreenTea(2);
    Tea *tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}
