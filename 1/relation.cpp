#include <iostream>
using namespace std;

int main()
{
    // Challenge: A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge,
    // and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

    int cups;

    cout << "Enter the number of cups you had : ";
    cin >> cups;
    // = is a assignment operator and == is a comparison operator

    if (cups > 20)
    {
        cout << "You are a GOLD member" << endl;
    }
    else if (cups <= 20 && cups >= 10)
    {
        cout << "You are a SILVER member" << endl;
    }
    else
    {
        cout << "You are a REGULAR member..." << endl;
    }

    return 0;
}