#include <iostream>

using namespace std;

int sumCalc(int* table, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += table[i];
    }

    return sum;
}

int main() {
    int size;

    cout << "Enter the size of the table: ";
    cin >> size;

    if (size < 1) {
        return 1;
    }

    int* table = new int[size];

    cout << "Enter the integers of the table: ";

    for (int i = 0; i < size; i++) {
        cin >> table[i];
    }

    int sum = sumCalc(table, size);

    cout << "The sum of the table is: " << sum << endl;

    delete[] table;
    table = nullptr;
}