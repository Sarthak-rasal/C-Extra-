#include <iostream>
using namespace std;

int totalChaiserved(int chai[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + chai[i];
    }
    return total;
}

int *prepareChaiOrders(int cups)
{
    int *orders = new int[cups];
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main()
{

    int chaiTemperature[5] = {85, 90, 88, 92, 89};
    cout << "Chai temperature : ";
    for (int i = 0; i < 5; i++)
    {
        cout << chaiTemperature[i] << " degree C \n";
    }

    int chaiServed[7] = {50, 60, 55, 70, 56, 38};
    cout << "Chai cups served on day 1 " << chaiServed[0] << endl;
    cout << "Chai cups served on day 2 " << chaiServed[1] << endl;
    cout << "Chai cups served on day 3 " << chaiServed[2] << endl;

    int total = totalChaiserved(chaiServed, 7);
    cout << "Total chai served are : " << total << endl;

    int cups = 5;
    int *chaiorderr = prepareChaiOrders(cups);

    for (int i = 0; i < cups; i++)
    {
        cout << i + 1 << " Cup " << " has " << chaiorderr[i] << "ml" << endl;
    }

    // cleanup
    delete[] chaiorderr;

    return 0;
}