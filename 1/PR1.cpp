#include <iostream>
// Preprocessor directives start with #
//  Press ctrl and left click on iostream to know a jist about what is included
using namespace std;

// Can also make your own namespace
namespace mySar
{
    void display()
    {
        // Comment
    }
    int main()
    {
        cout << "Hello Bhai";

        /*
        Not using namespace std
        std::cout << "Hello" << std::endl;
        */
        //  a slash and a astrike press enter and then alt + arrow keys

        // using your own namespace
        mySar ::display();

        // returning the same value as the fuction like 2 4 5 6
        // returning 0 means the code was successfully executed
    }

}
