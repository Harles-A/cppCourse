#include <iostream>

using namespace std;

class Point {
private:
    int _x;
    int _y;

public:
    Point(int x, int y) : _x(x), _y(y) {

    }

    void print() {
        cout << "Points: (" << _x << ", " << _y << ")" << endl;
    }
};

int main() {
    Point pointy(6, 9);
    pointy.print();

    return 0;
}
