#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> jonotus;

    string nimi;
    cout << "Anna nimi: ";

    while (true) {
        getline(cin, nimi);

        if (nimi.empty()) {
            break;
        }

        jonotus.push_back(nimi);

        cout << "Anna nimi: ";
    }

    cout << "\nPalvellaan jonossa olevat:\n";
    while (!jonotus.empty()) {
        cout << jonotus.front() << endl;
        jonotus.pop_front();
    }

    return 0;
}
