#include <iostream>
using namespace std;

int main()
{
    // Challenge: Create a program that checks if a user is eligible for a tea subscription discount.
    //  The discount applies if the user is either a student or has purchased more than 15 cups.
    // Ask the user to input their status (student or not) and their cup count.

    bool isStudent;
    int cups;

    cout << "Are you a student ? (1 for yes and 0 for no)";
    cin >> isStudent;
    cout << "How many cups have you purchased ?";
    cin >> cups;

    if (isStudent || cups > 15)
    {
        cout << "Congratulations you get a discount ";
    }
    else
    {
        cout << "You are not eligible for the discount";
    }

    return 0;
}