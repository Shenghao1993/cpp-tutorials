#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float value1 = 1.1;

    // To compare two floating point numbers
    // check if the difference between them is less than a threshold
    // Rather than using the equal equal sign.
    if (value1 < 1.11) {
        cout << "equals" << endl;
    } else {
        cout << "not equal" << endl;
    }

    cout << setprecision(10) << value1 << endl;
    return 0;
}