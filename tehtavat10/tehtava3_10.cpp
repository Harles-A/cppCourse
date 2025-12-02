#include <iostream>

using namespace std;

template <typename T>
void bubbleSort(T* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j + 1] < arr[j]) {
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

class Hevonen {
private:
    int kavionKoko;

public:
    Hevonen() : kavionKoko(0) {}

    Hevonen(int koko) : kavionKoko(koko) {}

    int getKavionKoko() const {
        return kavionKoko;
    }

    bool operator<(const Hevonen& other) const {
        return kavionKoko < other.kavionKoko;
    }
};

ostream& operator<<(ostream& os, const Hevonen& h) {
    os << h.getKavionKoko();
    return os;
}

int main() {
    Hevonen talli[] = {
        Hevonen(6),
        Hevonen(4),
        Hevonen(8),
        Hevonen(3),
        Hevonen(5)
    };

    int koko = sizeof(talli) / sizeof(talli[0]);

    cout << "Hevosten kavion koot ennen: ";
    Print(talli, koko);

    bubbleSort(talli, koko);

    cout << "Hevosten kavion koot jalkeen: ";
    Print(talli, koko);

    return 0;
}
