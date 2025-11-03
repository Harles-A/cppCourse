// Luo osoitin, joka osoittaa johonkin kokonaislukumuuttujaan. Luo sen jälkeen
// toinen osoitin, joka osoittaa äskeiseen osoittimeen. Muuta sen jälkeen
// em. kokonaisluvun arvoa jälkimmäisen osoittimen avulla. Vihje: **

#include <iostream>

using namespace std;

int main() {

    int x = 50;

    int* y = &x; // y osottaa x:ään
    int** z = &y; // z osoittaa y:hyn

    **z = 200;

    cout << x << endl;

}