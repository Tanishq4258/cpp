#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};

// Class B inherits from A
class B : public A {
public:
    void displayB() {
        cout << "This is class B" << endl;
    }
};

// Class C also inherits from A
class C : public A {
public:
    void displayC() {
        cout << "This is class C" << endl;
    }
};

int main() {
    B objB;
    C objC;

    cout << "Object of B:" << endl;
    objB.displayA(); // from A
    objB.displayB(); // from B

    cout << "\nObject of C:" << endl;
    objC.displayA(); // from A
    objC.displayC(); // from C

    return 0;
}
