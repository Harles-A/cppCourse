//Määrittele taulukko, jossa on viisi kokonaislukua. Käytä osoitinaritmetiikkaa
//(eli osoittimia ja ++ operaattoria), jotta voit tulostaa jokaisen taulukon alkion arvon.

#include <iostream>

using namespace std;

int main() {

    int x[5] = {1,2,3,4,5};

    int* y = &x[0]; // Same as int* y = x;

    int i = 0;

    while (i < 5) {
        cout << *y << endl;
        i++;
        y++;
    }

    return 0;
}