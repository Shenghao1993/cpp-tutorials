#include <iostream>
using namespace std;

int main()
{
    bool bValue = true;
    cout << bValue << endl;

    // Output ASCII character
    char cValue = 55; // Same as: char cValue = '7';
    cout << cValue << endl;
    cout << "Size of char: " << sizeof(char) << endl; // 1 byte

    // Get the position of the character in the ASCII table
    wchar_t wValue = 'i';
    cout << wValue << endl;
    cout << (char)wValue << endl; // Cast data type
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
    return 0;
}