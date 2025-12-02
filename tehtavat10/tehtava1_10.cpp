#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Stack {
private:
    T* data;
    int capacity;
    int count;

public:
    Stack(int cap) : capacity(cap), count(0) {
        data = new T[capacity];
    }

    ~Stack() {
        delete[] data;
    }

    void push(const T& value) {
        data[count] = value;
        count++;
    }

    T pop() {
        count--;
        return data[count];
    }

    int size() const {
        return count;
    }
};

int main() {
    Stack<int> intStack(25);
    intStack.push(3);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.push(40);

    cout << "intStack size: " << intStack.size() << endl;
    while (intStack.size() > 0) {
        cout << "intStack pop: " << intStack.pop() << endl;
    }

    cout << endl;

    Stack<string> stringStack(5);
    stringStack.push("first");
    stringStack.push("chicken");
    stringStack.push("banana");

    cout << "stringStack size: " << stringStack.size() << endl;
    while (stringStack.size() > 0) {
        cout << "stringStack pop: " << stringStack.pop() << endl;
    }

    cout << endl;

    Stack<double> doubleStack(6);
    doubleStack.push(2.22);
    doubleStack.push(5.65);

    cout << "doubleStack size: " << doubleStack.size() << endl;
    while (doubleStack.size() > 0) {
        cout << "doubleStack pop: " << doubleStack.pop() << endl;
    }

    return 0;
}
