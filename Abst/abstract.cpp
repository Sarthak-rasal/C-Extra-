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
};

int main()
{

    return 0;
}
