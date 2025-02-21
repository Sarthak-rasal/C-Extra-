#include <iostream>
using namespace std;

int main()
{
    // lambda functions
    auto sum = [](int a, int b)
    {
        return a + b;
    };

    cout << "Sum: " << sum(3, 4) << endl; // Output: Sum: 7
    return 0;

    return 0;
}