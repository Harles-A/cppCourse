#include <iostream>
#include <string>

using namespace std;

int main() {

    string spuoli;
    double hemoglobiini;

    cout << "Anna biologinen sukupuoli (m/n): ";
    cin >> spuoli;

    cout << "Anna hemoglobiiniarvo: ";
    cin >> hemoglobiini;

    if (spuoli == "n" && hemoglobiini >= 117 && hemoglobiini <= 175) {
        cout << "Hemoglobiiniarvo on normaali." << endl;
    }
    else if (spuoli == "n" && hemoglobiini > 175) {
        cout << "Hemoglobiiniarvo on korkea." << endl;
    }
    else if (spuoli == "n" && hemoglobiini < 117) {
        cout << "Hemoglobiiniarvo on alhainen." << endl;
    }
    else if (spuoli == "m" && hemoglobiini >= 134 && hemoglobiini <= 195) {
        cout << "Hemoglobiiniarvo on normaali." << endl;
    }
    else if (spuoli == "m" && hemoglobiini > 195) {
        cout << "Hemoglobiiniarvo on korkea." << endl;
    }
    else if (spuoli == "m" && hemoglobiini < 134) {
        cout << "Hemoglobiiniarvo on alhainen." << endl;
    }
    else {
        cout << "Error! x.x " << endl;
    }

    return 0;


}