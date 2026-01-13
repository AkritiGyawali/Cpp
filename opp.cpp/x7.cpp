#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Regular virtual function
    virtual void info() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square." << endl;
    }
};

int main() {
    // Shape shape; // Error: Cannot instantiate abstract class

    Circle c;
    Square s;

    Shape *ptr = &c;
    ptr->draw(); // Calls Circle's draw()

    ptr = &s;
    ptr->draw(); // Calls Square's draw()

    return 0;
}
