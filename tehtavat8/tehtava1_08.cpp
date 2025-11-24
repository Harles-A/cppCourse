/*
Tee kaksi luokkaa: Henkilö ja Opiskelija. Opiskelija perii Henkilö-luokan. Lisää Henkilö-luokkaan
nimi-jäsentietue ja Opiskelija-luokkaan opiskelijanumero. Luo Opiskelija-olio ja aseta sen kaikki
jäsentiedot.
*/

#include <iostream>
#include <string>

using namespace std;

class Henkilo {
private:
    string nimi;

public:
    Henkilo() {}

    Henkilo(const string& n) : nimi(n) {}

    void asetaNimi(const string& n) {
        nimi = n;
    }

    string haeNimi() const {
        return nimi;
    }
};

class Opiskelija : public Henkilo {
private:
    string opiskelijanumero;

public:
    Opiskelija() {}

    Opiskelija(const string& n, const string& nro)
        : Henkilo(n), opiskelijanumero(nro) {}

    void asetaOpiskelijanumero(const string& nro) {
        opiskelijanumero = nro;
    }

    string haeOpiskelijanumero() const {
        return opiskelijanumero;
    }
};

int main() {
    Opiskelija op;

    op.asetaNimi("Grumpy Cat");
    op.asetaOpiskelijanumero("123456");

    cout << "Opiskelijan nimi: " << op.haeNimi() << endl;
    cout << "Opiskelijanumero: " << op.haeOpiskelijanumero() << endl;

    return 0;
}
