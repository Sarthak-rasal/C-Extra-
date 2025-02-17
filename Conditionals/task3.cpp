#include <iostream>
using namespace std;

// Challenge: A tea shop offers discounts based on the number of tea cups ordered.
// Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount
// Between 10 and 20 cups: 10% discount
// Less than 10 cups: No discount

int main()
{
    int cups;

    double pricePerCup = 25, discount, totalPrice;

    cout << " Enter the number of cups :";
    cin >> cups;

    totalPrice = pricePerCup * cups;

    if (cups > 20)
    {
        discount = 0.20;
        cout << "You get 20 percent discount !!" << endl;
    }
    else if (cups >= 10 && cups <= 20)
    {
        discount = 0.10;
        cout << "You get 10 percent discount !!" << endl;
    }
    else
    {
        discount = 0;
        cout << "You get no discount";
    }

    cout << "Price before discount :" << totalPrice << endl;

    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount is " << totalPrice << endl;
}