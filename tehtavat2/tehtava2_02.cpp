// Luo liukulukumuuttuja (double) ja osoitin siihen. Muuta muuttujan arvoa osoittimen
// avulla ja tulosta muuttujan arvo ennen ja jälkeen muutoksen.

#include <iostream>

using namespace std;

int main() {

    double x = 2.35;
    double* y = &x;

    cout << *y << endl;

    *y += 5.5;

    cout << *y << endl;

    return 0;
}