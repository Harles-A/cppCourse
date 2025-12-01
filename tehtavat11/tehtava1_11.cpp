#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maksimi(const T& a, const T& b) {
    if (a < b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int i1 = 11;
    int i2 = 22;
    cout << "Suurempi (int): " << maksimi(i1, i2) << endl;

    double d1 = 6.15;
    double d2 = 2.33;
    cout << "Suurempi (double): " << maksimi(d1, d2) << endl;

    string s1 = "banaana";
    string s2 = "donki";
    cout << "Suurempi (string): " << maksimi(s1, s2) << endl;

    return 0;
}
