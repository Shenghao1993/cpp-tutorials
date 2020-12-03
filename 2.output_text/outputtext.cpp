#include <iostream>

using namespace std;

int main() {
    // flush: output the text without creating a line feed (carriage return)
    // It doesn't go to a new line.
    cout << "Starting program ..." << flush;

    // endler will input a blank line and flush the output.
    cout << "This is some text." << endl;
    cout << "Banana. "
         << "Apple. "
         << "Orange. " << endl;
    cout << "This is some more text" << endl;
    return 0;
}