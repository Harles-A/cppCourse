#include <iostream>

using namespace std;

class Box {
public:
    int _size;

    void show_size() {
        cout << "Size: " << _size << endl;
    }
};

int main() {
    Box* b = new Box();

    b->_size = 120;

    b->show_size();

    delete b;

    return 0;
}
