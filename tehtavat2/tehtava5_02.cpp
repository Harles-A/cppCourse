#include <iostream>
#include <windows.h>

using namespace std;

void nollaa(int* taulukko, int n) {
    for (int i = 0; i < n; i++) {
        taulukko[i] = 0;
    }
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numbers[] = { 11, 12, 15, 20, 33, 68, 100 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Taulukko ennen: " << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    nollaa(numbers, size);

    cout << "Taulukko nollauksen jälkeen: " << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
