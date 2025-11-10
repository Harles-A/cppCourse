#include <iostream>
using namespace std;

int* table = nullptr;
int size = 0;

void lue_arvot() {
    for (int i = 0; i < size; i++) {
        cout << "Anna " << i + 1 << ". luku: ";
        cin >> table[i];
    }
}

void kaanna() {
    for (int i = 0; i < size / 2; i++) {
        int temp = table[i];
        table[i] = table[size - 1 - i];
        table[size - 1 - i] = temp;
    }
}

void tulosta_arvot() {
    for (int i = 0; i < size; i++) {
        cout << table[i] << " ";
    }
    cout << endl;
}

int main() {

    cout << "Give table size: ";
    cin >> size;

    table = new int[size];

    lue_arvot();
    kaanna();

    cout << "Final table: ";
    tulosta_arvot();

    delete[] table;
    table = nullptr;

    return 0;
}
