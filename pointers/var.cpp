#include <iostream>
using namespace std;
int main(){
    int a=5, b=10;
    int *p = &a;
    int *q = &a;
    int *r = &a;

    cout << "Value of a: " << *p << endl;
    cout << "Value of a: " << *q << endl;
    cout << "Value of a: " << *r << endl;
    
    return 0;
}