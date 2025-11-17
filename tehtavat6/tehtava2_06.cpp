#include <iostream>

using namespace std;

class Lamp {
private:
    bool _on;

public:
    Lamp() {
        cout << "Lamp created" << endl;
    }

    ~Lamp() {
        cout << "Lamp destroyed" << endl;
    }

    void turn_on() {
        _on = true;
    }

    void turn_off() {
        _on = false;
    }
};

int main() {
    Lamp lampylamp;

    lampylamp.turn_on();
    lampylamp.turn_off();

    return 0;
}
