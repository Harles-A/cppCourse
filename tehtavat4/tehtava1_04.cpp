#include <iostream>

using namespace std;

int globalThing = 10;

void changeValue(int newThing ) {
    globalThing = newThing;
}

void printValue() {
    cout << globalThing << endl;
}

int main() {
    printValue();

    changeValue(25);

    printValue();

    return 0;
}