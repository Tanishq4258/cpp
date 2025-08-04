#include <iostream>
using namespace std;

namespace Physics{
    double gravity(){
        return 9.8;
    }
}

int main(){
    cout << Physics::gravity() << endl;
    return 0;
}