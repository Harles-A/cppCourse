#include <iostream>

using namespace std;

int* varaa_taulukko(int n) {

    int* table = new int[n];

    return table;
}

int main() {

    int size;

    cout << "Enter the size of the table: ";
    cin >> size;

    int* table = varaa_taulukko(size);

    cout << "Enter " << size << " integers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> table[i];
    }

    cout << "Table contains: " << endl;
    for (int i = 0; i < size; i++) {
        cout << table[i] << " ";
    }

    delete[] table;
    table = nullptr;

    return 0;
}