#include <iostream>

using namespace std;

extern int globalThing;

void changeValue(int newThing );
void printValue();

int main() {
    printValue();

    changeValue(100);

    cout << globalThing << endl;

    return 0;
}