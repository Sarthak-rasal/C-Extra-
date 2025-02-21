#include <iostream>
#include <string>
using namespace std;

int checkTemperature(int temperature)
{
    return temperature;
}

// function declaration (should be done at the top)
void serveChai(int cups);
// function overloading : same name but can be called by different parameters
void serveChai(string teaType = "Masala chai")
{ // using default paramenter "masala chai" when no parameters are passed while calling serveChai function
    cout << "Serving " << teaType << endl;
}

int main()
{
    int temp = checkTemperature(55);
    cout << temp << endl;
    serveChai(3);
    serveChai("Lemon tea");

    return 0;
}
// function defintion (can be done anywhere)
void serveChai(int cups)
{
    cout << "Serving " << cups << " of chai";
}