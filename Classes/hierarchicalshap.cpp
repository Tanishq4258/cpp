#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void displayShape() {
        cout << "This is a shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void displayCircle() {
        cout << "circle" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void displayRectangle() {
        cout << "rectangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    cout << "Circle object output:" << endl;
    c.displayShape();
    c.displayCircle();

    cout << "\nRectangle object output:" << endl;
    r.displayShape();
    r.displayRectangle();

    return 0;
}
