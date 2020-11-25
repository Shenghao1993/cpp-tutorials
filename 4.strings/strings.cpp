#include <iostream>
using namespace std;

int main()
{
    // int is a primitive type, string is an object
    string text1 = "Hello ";
    string text2 = "Fred";

    // Concatenation
    string text3 = text1 + text2;
    cout << text1 << text2 << endl;
    cout << text3 << endl;
    return 0;
}