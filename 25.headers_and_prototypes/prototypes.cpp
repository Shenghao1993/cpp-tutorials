#include <iostream>

#include "utils.h"

using namespace std;

// Prototype
void doSomething();

int main() {
    doSomething();
    doSomething();
    return 0;
}

void doSomething() { cout << "Hello" << endl; }