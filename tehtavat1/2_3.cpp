#include <iostream>

using namespace std;

int main() {
    double kanta, korkeus;

    cout << "Anna kanta: ";
    cin >> kanta;

    cout << "Anna korkeus: ";
    cin >> korkeus;

    double piiri = 2 * (kanta + korkeus);
    double pintaala = kanta * korkeus;

    cout << "Kulmion piiri on " << piiri
        << " ja pinta-ala on " << pintaala << endl;
    return 0;
}
