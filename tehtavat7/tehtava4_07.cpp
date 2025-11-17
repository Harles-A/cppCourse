#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

class Auto {
private:
    string rekisteritunnus;
    int huippunopeus;
    double tamahetkinen_nopeus;
    double kuljettu_matka;

public:
    Auto() : rekisteritunnus(""), huippunopeus(0), tamahetkinen_nopeus(0.0), kuljettu_matka(0.0) {}
    Auto(string r, int h) : rekisteritunnus(r), huippunopeus(h),
                            tamahetkinen_nopeus(0.0), kuljettu_matka(0.0) {}

    void kiihdyta(int nopeus_muutos) {
        tamahetkinen_nopeus += nopeus_muutos;
        if (tamahetkinen_nopeus > huippunopeus) tamahetkinen_nopeus = huippunopeus;
        if (tamahetkinen_nopeus < 0) tamahetkinen_nopeus = 0;
    }

    void kulje(double tuntimaara) {
        kuljettu_matka += tamahetkinen_nopeus * tuntimaara;
    }

    double get_kuljettu_matka() const { return kuljettu_matka; }

    void print_auto_data() const {
        cout << left << setw(20) << rekisteritunnus
             << setw(10) << huippunopeus
             << setw(10) << tamahetkinen_nopeus
             << setw(12) << kuljettu_matka << endl;
    }
};


int main() {
    srand((unsigned)time(nullptr));

    Auto autot[10];

    for (int i = 0; i < 10; ++i) {
        string rekisteritunnus = "ABC-" + to_string(i + 1);
        int huippunopeus = 100 + rand() % 101;
        autot[i] = Auto(rekisteritunnus, huippunopeus);
    }

    bool finished = false;
    int tunnit = 0;

    while (!finished) {
        ++tunnit;
        for (int i = 0; i < 10; ++i) {
            int muutos = rand() % 26 - 10;
            autot[i].kiihdyta(muutos);
            autot[i].kulje(1.0);

            if (autot[i].get_kuljettu_matka() >= 10000.0) {
                finished = true;
            }

        }
    }

    cout << left << setw(10) << "Rekisteritunnus "
         << setw(4) << "Huippunopeus "
         << setw(10) << "Nopeus "
         << setw(12) << "Kuljettu matka" << endl;
    cout << string(53, '-') << endl;

    cout << fixed << setprecision(1);
    for (int i = 0; i < 10; ++i) {
        autot[i].print_auto_data();
    }

    return 0;
}
