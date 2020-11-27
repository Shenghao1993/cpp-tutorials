#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your name " << flush;

    // Declare variable
    string input;

    // ">>": extraction operation
    cin >> input;
    cout << "You entered: " << input << endl;

    cout << "Enter a number: " << flush;
    int value;
    cin >> value;
    cout << "You entered: " << value << endl;
    return 0;
}