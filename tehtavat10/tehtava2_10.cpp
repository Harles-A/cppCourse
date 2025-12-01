#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(const T& a, const T& b) : first(a), second(b) {}

    T getMax() const {
        if (first < second) {
            return second;
        } else {
            return first;
        }
    }

    void print() const {
        cout << "first = " << first << ", second = " << second << endl;
    }
};

int main() {
    Pair<int> pInt(5, 8);
    pInt.print();
    cout << "Max (int): " << pInt.getMax() << endl << endl;

    Pair<double> pDouble(7.5, 5.7);
    pDouble.print();
    cout << "Max (double): " << pDouble.getMax() << endl << endl;

    Pair<string> pString("goat", "moons");
    pString.print();
    cout << "Max (string): " << pString.getMax() << endl;

    return 0;
}
