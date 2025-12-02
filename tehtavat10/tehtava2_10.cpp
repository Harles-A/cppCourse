#include <iostream>

using namespace std;

template <typename T>
void bubbleSort(T* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void Print(T* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {6, 4, 9, 0, 2};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "int-taulukko ennen: ";
    Print(intArr, intSize);

    bubbleSort(intArr, intSize);

    cout << "int-taulukko jalkeen: ";
    Print(intArr, intSize);

    cout << endl;

    float floatArr[] = {5.15f, 2.33f, 2.90f, 0.1f, -4.7f};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);

    cout << "float-taulukko ennen: ";
    Print(floatArr, floatSize);

    bubbleSort(floatArr, floatSize);

    cout << "float-taulukko jalkeen: ";
    Print(floatArr, floatSize);

    return 0;
}
