#include <iostream>
#include <string>

using namespace std;

class Auto {
private:
    string rekisteritunnus;
    int huippunopeus;
    double tamahetkinen_nopeus;
    double kuljettu_matka;

public:
    Auto(string r, int h, double nopeus = 0.0, double matka = 0.0)
        : rekisteritunnus(r), huippunopeus(h),
          tamahetkinen_nopeus(nopeus), kuljettu_matka(matka) {}

    void kiihdyta(int nopeus_muutos) {
        tamahetkinen_nopeus += nopeus_muutos;
        if (tamahetkinen_nopeus > huippunopeus) tamahetkinen_nopeus = huippunopeus;
        if (tamahetkinen_nopeus < 0) tamahetkinen_nopeus = 0;
    }

    void kulje(double tuntimaara) {
        kuljettu_matka += tamahetkinen_nopeus * tuntimaara;
    }

    void print_auto_data() const {
        cout << "Rekisteritunnus: " << rekisteritunnus
             << ", Huippunopeus: " << huippunopeus << " km/h"
             << ", Nopeus: " << tamahetkinen_nopeus << " km/h"
             << ", Kuljettu matka: " << kuljettu_matka << " km\n";
    }
};

int main() {
    Auto auto1("ABC-123", 142, 60.0, 2000.0);
    auto1.kulje(1.5);
    auto1.print_auto_data();
    return 0;
}
