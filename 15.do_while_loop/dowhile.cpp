#include <iostream>
using namespace std;

int main() {
    const string password = "hello";  // the variable cannot be redefined
    string input;

    do {
        cout << "Enter your password > " << flush;
        cin >> input;
        if (input != password) {
            cout << "Access denied." << endl;
        }
    } while (input != password);
    cout << "Password accepted" << endl;

    return 0;
}