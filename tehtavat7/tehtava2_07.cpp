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
    Auto(string r, int h)
        : rekisteritunnus(r), huippunopeus(h),
          tamahetkinen_nopeus(0.0), kuljettu_matka(0.0) {}

    void kiihdyta(int nopeus_muutos) {
        tamahetkinen_nopeus += nopeus_muutos;
        if (tamahetkinen_nopeus > huippunopeus) tamahetkinen_nopeus = huippunopeus;
        if (tamahetkinen_nopeus < 0) tamahetkinen_nopeus = 0;
    }

    void print_auto_data() const {
        cout << "Rekisteritunnus: " << rekisteritunnus
             << ", Huippunopeus: " << huippunopeus << " km/h"
             << ", Nopeus: " << tamahetkinen_nopeus << " km/h"
             << ", Kuljettu matka: " << kuljettu_matka << " km\n";
    }

    void print_auto_nopeus() const {
        cout << "Nopeus: " << tamahetkinen_nopeus << " km/h\n";
    }
};

int main() {
    Auto auto1("ABC-123", 142);
    auto1.print_auto_data();
    auto1.kiihdyta(30);
    auto1.kiihdyta(70);
    auto1.kiihdyta(50);
    auto1.print_auto_nopeus();
    auto1.kiihdyta(-200);
    auto1.print_auto_nopeus();
    return 0;
}
