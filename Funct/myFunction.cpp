#include <iostream>
#include <string>
using namespace std;

int checkTemperature(int temperature)
{
    return temperature;
}

// function declaration (should be done at the top)
void serveChai(int cups);

int main()
{
    int temp = checkTemperature(55);
    cout << temp << endl;
    serveChai(3);

    return 0;
}
// function defintion (can be done anywhere)
void serveChai(int cups)
{
    cout << "Serving " << cups << " of chai";
}