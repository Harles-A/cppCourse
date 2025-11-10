#include <iostream>

using namespace std;

int main() {

    int size;

    cout << "Give table size: " << endl;
    cin >> size;

    if (size < 1) {
        return 1;
    }

    int* table = new int[size];

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