#include <iostream>
using namespace std;

namespace Lib1{
    void calculate(){
        cout << "Performing calculations..." << endl;
    }
}

namespace Lib2{
    void calculate(){
        cout << "Calculating..." << endl;
    }
}

int main(){
    Lib1::calculate();
    Lib2::calculate();
    return 0;
}