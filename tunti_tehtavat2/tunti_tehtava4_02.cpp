// Kirjoita funktio, joka ottaa parametrinaan osoittimen kokonaislukuun
// ja moninkertaistaa arvon kahdella. Kirjoita testipääohjelma.

#include <iostream>

using namespace std;

void tuplaa(int* luku) {

    *luku *= 2;
}

int main() {
    int x = 20;
    tuplaa(&x);
    cout << x << endl;

    return 0;
}