/*
*Laadi Elain-luokka, joka on yliluokka ja jolle Kissa sekä Koira ovat siitä perittyjä aliluokkia.
Kirjoita luokikien konstruktoreihin tulostuslauseet. Luo pääohjelmassa Elain, Kissa ja Koira.
*/

#include <iostream>

using namespace std;

class Elain {
public:
    Elain() {
        cout << "Elain-luokan konstruktori" << endl;
    }
};

class Kissa : public Elain {
public:
    Kissa() {
        cout << "Kissa-luokan konstruktori" << endl;
    }
};

class Koira : public Elain {
public:
    Koira() {
        cout << "Koira-luokan konstruktori" << endl;
    }
};

int main() {
    cout << "Luodaan Elain-olio:" << endl;
    Elain e;

    cout << "\nLuodaan Kissa-olio:" << endl;
    Kissa k;

    cout << "\nLuodaan Koira-olio:" << endl;
    Koira o;

    return 0;
}
