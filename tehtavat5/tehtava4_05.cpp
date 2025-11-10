#include <iostream>

using namespace std;

void tulosta_arvot (const int* t, int n) {
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

int main() {

    const int size = 3;
    int table[size] = {1, 2, 3};

    cout << "Table: " << endl;
    tulosta_arvot (table, size);
    return 0;
}