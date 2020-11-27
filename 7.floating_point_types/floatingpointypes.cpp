#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fValue = 76.4;
    cout << "Size of float: " << sizeof(float) << endl; // 4 bytes
    cout << fixed << fValue << endl;
    cout << scientific << fValue << endl;

    // Set number of significant digits
    cout << setprecision(20) << fixed << fValue << endl;

    // double can store around 15 significant digits
    double dValue = 123.456789;
    // more digits are correct than fValue
    cout << setprecision(20) << fixed << dValue << endl;

    long double lValue = 123.45676543210;
    cout << setprecision(20) << fixed << lValue << endl;
    cout << "Size of long double: " << sizeof(lValue) << endl; // 14 bytes
    return 0;
}