#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> puhelinluettelo;

    puhelinluettelo["Miki"] = "0401234567";
    puhelinluettelo["Muki"] = "04041234";
    puhelinluettelo["Maki"] = "04149802";

    string haettava;
    cout << "Anna haettava nimi: ";
    getline(cin, haettava);

    auto it = puhelinluettelo.find(haettava);

    if (it != puhelinluettelo.end()) {
        cout << "Numero: " << it->second << endl;
    } else {
        cout << "Nimea ei ole puhelinluettelossa." << endl;
    }

    return 0;
}
