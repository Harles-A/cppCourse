#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string _brand;
    int _year;

    Car(string brand, int year) : _brand(brand), _year(year) {
        cout << "Car created: " << _brand << endl;
    }

    Car(const Car& other) : _brand(other._brand), _year(other._year) {
        cout << "Copy constructor called for " << _brand << endl;
    }

    ~Car() {
        cout << "Destructor called for " << _brand << endl;
    }
};

void print_car(const Car& c) {
    cout << "print_car(const Car&) -> " << c._brand << " " << c._year << endl;
}

void print_car_2(Car c) {
    cout << "print_car(Car) -> " << c._brand << " " << c._year << endl;
}

int main() {
    Car car("Toyota", 2020);

    cout << "Calling print_car (reference):" << endl;
    print_car(car);

    cout << "Calling print_car_2 (value):" << endl;
    print_car_2(car);

    return 0;
}
