#include <iostream>
using namespace std;

int* varaa_taulukko(int n) {
    int* table = new int[n];
    return table;
}

void lue_arvot(int* t, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Anna " << i + 1 << ". luku: ";
        cin >> t[i];
    }
}

void kaanna(int* t, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = temp;
    }
}

void tulosta_arvot(const int* t, int n) {
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Give table size: ";
    cin >> size;

    int* table = varaa_taulukko(size);

    lue_arvot(table, size);

    kaanna(table, size);

    cout << "Final table: ";
    tulosta_arvot(table, size);

    delete[] table;
    table = nullptr;

    return 0;
}
