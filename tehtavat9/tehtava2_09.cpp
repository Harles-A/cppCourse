#include <iostream>

using namespace std;

class Laskutoimitus {
public:
    virtual double laske(double x, double y) = 0;
    virtual ~Laskutoimitus() {}
};

class Yhteenlasku : public Laskutoimitus {
public:
    double laske(double x, double y) override {
        return x + y;
    }
};

class Kertolasku : public Laskutoimitus {
public:
    double laske(double x, double y) override {
        return x * y;
    }
};

int main() {
    Laskutoimitus* laskin = nullptr;

    Yhteenlasku yhteen;
    Kertolasku kerto;

    laskin = &yhteen;
    double tulos1 = laskin->laske(2.0, 3.0);
    cout << "Yhteenlasku: " << tulos1 << endl;

    laskin = &kerto;
    double tulos2 = laskin->laske(2.0, 3.0);
    cout << "Kertolasku: " << tulos2 << endl;

    return 0;
}

// Ensimmäisellä kerralla suoritetaan Yhteenlasku::laske ja toisella Kertolasku::laske.