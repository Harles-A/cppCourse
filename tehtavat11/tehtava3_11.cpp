#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);

    cout << "Arvosanat: " << endl;
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    int summa = 0;
    for (auto x : v) {
        summa += x;
    }

    double keskiarvo = 0.0;
    if (!v.empty()) {
        keskiarvo = static_cast<double>(summa) / v.size();
    }

    cout << "Keskimaarainen arvosana: " << keskiarvo << endl;

    sort(v.begin(), v.end());

    cout << "Lajitellut arvosanat:" << endl;
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
