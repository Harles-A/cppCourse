// Luo kokonaisluku (int) -muuttuja ja osoitin, joka osoittaa kyseiseen muuttujaan.
// Tulosta muuttujan arvo sekä suoraan että osoittimen avulla.

#include <iostream>

using namespace std;

int main() {

    int x = 5;
    int* y = &x;

    cout << x << endl;
    cout << *y;

    return 0;
}