#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string _brand;
    int _year;

public:
    void set_brand(string brand) {
        _brand = brand;
    }

    void set_year(int year) {
        _year = year;
    }

    void print_info() {
        cout << "Brand: " << _brand << endl;
        cout << "Year: " << _year << endl;
    }
};

int main() {
    Car myCar;

    myCar.set_brand("Ford");
    myCar.set_year(1999);

    myCar.print_info();

    return 0;
}
