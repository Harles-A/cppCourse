/*
Määrittele Elain-luokkaan puhdas virtuaalifunktio aantele(). Toteuta funktio Kissalle ja Koiralle.
Luo pääohjelmassa Kissa ja Koira, ja testaa ääntelyä.
*/

#include <iostream>

using namespace std;

class Elain {
public:
    virtual void aantele() const = 0;

    virtual ~Elain() {}
};

class Kissa : public Elain {
public:
    void aantele() const override {
        cout << "Kissa sanoo: Miau!" << endl;
    }
};

class Koira : public Elain {
public:
    void aantele() const override {
        cout << "Koira sanoo: Hau!" << endl;
    }
};

int main() {
    Kissa k;
    Koira o;

    k.aantele();
    o.aantele();

    Elain* e1 = &k;
    Elain* e2 = &o;

    e1->aantele();
    e2->aantele();

    return 0;
}
