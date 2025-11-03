#include <iostream>

using namespace std;

// a)

int summaa(const int* a, const int* b) {
    return *a + *b;
}

// b)

int summaa(const int& a, const int& b) {
    return a + b;
}

int main() {
    int x = 10, y = 8;

    int osoitintulos = summaa(&x, &y);
    cout << "Osoitinversio: " << x << " + " << y << " = " << osoitintulos << endl;

    int referenssitulos = summaa(x, y);
    cout << "Referenssiversio: " << x << " + " << y << " = " << referenssitulos << endl;

    return 0;
}
