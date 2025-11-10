#include <iostream>

using namespace std;

void lue_arvot(int* t, int n) {

    for (int i = 0; i < n; i++) {
        cout << "Give " << i +1 << ". number:  " << endl;
        cin >> t[i];
    }
}

int main() {

    int size = 3;
    int table[size];

    lue_arvot(table, size);

    cout << "Table contains: " << endl;
    for (int i = 0; i < size; i++) {
        cout << table[i] << " ";
    }

    return 0;
}