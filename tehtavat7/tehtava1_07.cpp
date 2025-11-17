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

    void print_auto_data() const {
        cout << "Rekisteritunnus: " << rekisteritunnus
             << ", Huippunopeus: " << huippunopeus << " km/h"
             << ", Nopeus: " << tamahetkinen_nopeus << " km/h"
             << ", Kuljettu matka: " << kuljettu_matka << " km\n";
    }
};

int main() {
    Auto auto1("ABC-123", 142);
    auto1.print_auto_data();
    return 0;
}

