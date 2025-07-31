#include<iostream>
using namespace std;
int calculate(int a, int b) {
    return a + b;
}
float calculate(float a, float b) {
    return a*b;
}
int calculate(int a, int b, int c) {
    return (float(a) + float(b) + float(c))/3;
}
int main(){
    int x,y,z;
    float p,q;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Sum of integers: " << calculate(x, y) << endl;
    cout << "Enter two floats: ";
    cin >> p >> q;
    cout << "Product of floats: " << calculate(p, q) << endl;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    cout << "Average of three integers: " << calculate(x, y, z) << endl;
    return 0;
}