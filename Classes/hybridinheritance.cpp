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

// Class D inherits from both B and C (Multiple Inheritance)
class D : public B, public C {
public:
    void displayD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D obj;
    // Note: obj.displayA() would be ambiguous without virtual inheritance in A
    obj.displayB();
    obj.displayC();
    obj.displayD();
    return 0;
}
