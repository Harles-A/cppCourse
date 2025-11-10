#include <iostream>

using namespace std;

void kaanna (int* t, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = t[i];
        t[i] = t[n - i - 1];
        t[n - i - 1] = temp;
    }
}

int main() {
    const int size = 7;
    int table[size] = {1, 2, 3, 4, 5, 6, 7};

    cout << "Original table: " << endl;
    for (int i = 0; i < size; i++) {
        cout << table[i] << " ";
    }

    cout << endl;

    kaanna(table, size);

    cout << "Final table: " << endl;
    for (int i = 0; i < size; i++) {
        cout << table[i] << " ";
    }

    cout << endl;

    return 0;
}