#include <iostream>
using namespace std;

int laskee(const char* mjono) {

    int pituus = 0;

    while (*mjono != '\0') {
        pituus++;
        mjono++;
    }

    return pituus;
}

int main() {
    const char mjono[] = "Hellooooooo";

    int pituus = laskee(mjono);

    cout << "Merkkijono: " << mjono << endl;
    cout << "Merkkijonon pituus on: " << pituus << endl;

    return 0;
}
