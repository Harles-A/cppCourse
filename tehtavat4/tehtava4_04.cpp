#include <iostream>

using namespace std;

void functionC() {
    cout <<"!";
}

void functionB() {
    cout << "World";
    functionC();
}

void functionA() {
    cout << "Hello ";
    functionB();
}

int main() {
    functionA();
    return 0;
}