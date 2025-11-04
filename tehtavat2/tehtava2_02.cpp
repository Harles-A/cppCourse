#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 69;
    int* y = &x;

    cout << "x:n osoite muistissa: " << &x << endl;
    cout << "y:n osoite muistissa: " << &y << endl;
    cout << "x:n arvo: " << x << endl;
    cout << "*y:n arvo: " << y << endl;
    cout << endl;

    cout << "Havainnollistava muistikuva:" << endl;
    cout << endl;

    cout << "+-----------------+       +------------------------+" << endl;
    cout << "|     x = " << x << "      |<---- | y = &x osoittaa tähän |" << endl;
    cout << "| Osoite: " << &x << " | | Osoite: " << &y << "    |" << endl;
    cout << "+-----------------+       +------------------------+" << endl;

    return 0;
}
