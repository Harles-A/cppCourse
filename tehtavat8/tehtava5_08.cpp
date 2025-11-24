// Määrittele Elain-osoitin, ja laita se osoittamaan dynaamisesti luotuun Kissaan tai Koiraan. Testaa ääntelyä.

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
    Elain* e = nullptr;

    e = new Kissa();
    e->aantele();
    delete e;

    e = new Koira();
    e->aantele();
    delete e;

    return 0;
}
