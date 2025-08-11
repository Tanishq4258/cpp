#include <iostream>
using namespace std;

class Base {
public:
    void fun() {
        cout << "Hello";
    }
};

class ChildBase : public Base { 
    
};

int main() {
    ChildBase cb1;
    cb1.fun(); 
    return 0;
}