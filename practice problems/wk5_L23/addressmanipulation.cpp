#include <iostream>
using namespace std;
auto sswap = [](int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};
auto findlargest = [](int *x, int *y, int *z){
    if (*x >= *y && *x >= *z) return x;
    else if (*y >= *x && *y >= *z) return y;
    else return z;
};
int main(){
    int a=10, b=20, c=30;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    sswap(p1, p2);
    sswap(p2, p3);
    sswap(p1, p3);

    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    int *largest = findlargest(p1, p2, p3);
    cout << "Largest value is: " << *largest << endl;
    *largest = 100;
    cout << "Therefore Modified Value is: " << *largest << endl;

    return 0;
}