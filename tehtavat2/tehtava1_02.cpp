# include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Seuravat muutujat vievät muistista: " << endl;
    cout << "int: " << sizeof(int) << " tavua" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " tavua" << endl;
    cout << "float: " << sizeof(float) << " tavua" << endl;
    cout << "double: " << sizeof(double) << " tavua" << endl;
    cout << "char: " << sizeof(char) << " tavua" << endl;
    cout << "bool: " << sizeof(bool) << " tavua" << endl;

    return 0;
}