#include <iostream>

using namespace std;

int main() {

    int count = 1;

    while (count <= 1000) {
        if (count % 3 == 0) {
            cout << count << endl;
        }
        count++;
    }

    return 0;
}
