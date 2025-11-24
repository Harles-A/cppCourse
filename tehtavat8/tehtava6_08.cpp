/*
Määrittele kaikkiin kolmeen luokkaan destruktorit, jotka tulostavat jotain. Tuhoa Kissa (tai Koira)
Elain-osoittimen kautta. Mitä havaitset? Miten varmistat, että kaikki destruktorit tulevat suorituiksi?
*/
#include <iostream>

using namespace std;

class Elain {
public:
    Elain() {
        cout << "Elain: konstruktori" << endl;
    }

    virtual ~Elain() {
        cout << "Elain: destruktori" << endl;
    }

    virtual void aantele() const = 0;
};

class Kissa : public Elain {
public:
    Kissa() {
        cout << "Kissa: konstruktori" << endl;
    }

    ~Kissa() override {
        cout << "Kissa: destruktori" << endl;
    }

    void aantele() const override {
        cout << "Kissa sanoo: Miau!" << endl;
    }
};

class Koira : public Elain {
public:
    Koira() {
        cout << "Koira: konstruktori" << endl;
    }

    ~Koira() override {
        cout << "Koira: destruktori" << endl;
    }

    void aantele() const override {
        cout << "Koira sanoo: Hau!" << endl;
    }
};

int main() {
    Elain* e = new Kissa();
    e->aantele();

    cout << "Poistetaan olio Elain-osoittimen kautta:" << endl;
    delete e;

    return 0;
}

// Teen kantaluokan destruktorista virtuaalisen, silloin "delete e" kutsuu ensin oikean aliluokan destruktoria ja sen jälkeen elain-destruktoria.