#include <iostream>
using namespace std;
#include <string>
// Write a program that keeps serving tea until the user says they’ve had enough (input 'stop').
// Use a break statement to exit the loop when the user types 'stop'.

int main()
{
    string response;
    // while true is used when you want to repeat a statement infinite times or till we get a break
    while (true)
    {
        cout << "Do you want more cups of tea (type 'stop' to exit )" << endl;
        getline(cin, response);

        if (response == "stop")
        {
            break;
        }

        cout << "Here is your another cup of tea. \n";
    }

    cout << "NO more tea will be served to you" << endl;
    return 0;
}