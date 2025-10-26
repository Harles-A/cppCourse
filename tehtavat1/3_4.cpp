#include <iostream>

using namespace std;

int main() {

    int vuosi;

    cout << "Anna vuosiluku: ";
    cin >> vuosi;

    if (vuosi % 100 == 0 && vuosi % 400 == 0) {
        cout << vuosi << " on karkausvuosi." << endl;
    }
    else if (vuosi % 100 == 0 && vuosi % 400 != 0) {
        cout << vuosi << " ei ole karkausvuosi." << endl;
    }
    else if (vuosi % 4 == 0) {
        cout << vuosi << " on karkausvuosi." << endl;
    }
    else if (vuosi % 4 != 0) {
        cout << vuosi << " ei ole karkausvuosi." << endl;
    }
    else {
        cout << "Error. x.x" << endl;
    }

    return 0;
}