// Määrittele osoitin, joka alkaa osoittaa nullptr-arvoon. Tarkista ohjelmassa, onko
// osoittimen arvo nullptr ennen kuin käytät sitä, ja tulosta viesti tilanteesta.

#include <iostream>
#include <windows.h>

using namespace std;

void tarkista(int* p) {
    if (p == nullptr) {
        cout << "Osoitin ei osoita mihinkään (nullptr)" << '\n';
    } else {
        cout << "Osoitin osoittaa muistipaikkaan: " << p << '\n'
             << "Osoittimen osoittama arvo on: " << *p << '\n';
    }
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int* p = nullptr; // Same as 0 or NULL

    tarkista(p);

    int number = 55;

    p = &number;

    tarkista(p);

    return 0;
}