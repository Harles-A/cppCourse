#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Writable {
public:
    virtual void writeState(const string& filename) const = 0;
};

class Readable {
public:
    virtual void readState(const string& filename) = 0;
};

class Henkilo : public Writable, public Readable {
private:
    string nimi;
    int ika;
    double palkka;

public:
    Henkilo(const string& n = "", int i = 0, double p = 0.0)
        : nimi(n), ika(i), palkka(p) {}

    void writeState(const string& filename) const override {
        ofstream out(filename);

        out << nimi << '\n'
            << ika << '\n'
            << palkka << '\n';
    }

    void readState(const string& filename) override {
        ifstream in(filename);

        getline(in, nimi);
        in >> ika;
        in >> palkka;
    }
};

int main() {
    Henkilo h("Miki Maus", 80, 5500.80);
    h.writeState("henkilo.txt");

    return 0;
}
