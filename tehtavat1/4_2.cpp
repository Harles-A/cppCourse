#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double maara = 0;

    while (maara >= 0) {
        cout << "Anna tuumien määrä: ";
        cin >> maara;

        if (maara >= 0) {
            cout << maara << " tuuma on " << maara * 2.54 << " senttimetriä." << endl;
        } else {
            cout << "Ohjelma lopettaa." << endl;
        }
    }

    return 0;

}