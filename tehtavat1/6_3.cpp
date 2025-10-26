#include <iostream>
#include <windows.h>

using namespace std;

double gall_to_litra(double gall_arvo) {
    return gall_arvo * 3.785;
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double gall_input;

    while (true) {
        cout << "Anna bensiinin määrä nestegallonoina: ";
        cin >> gall_input;

        if (gall_input < 0) {
            cout << "Annettu määrä on negatiivinen. Ohjelma lopettaa." << endl;
            break;
        }

        double litra_output = gall_to_litra(gall_input);

        cout << gall_input << " nestegallona on " << litra_output << " litraa." << endl;
    }

    return 0;

}