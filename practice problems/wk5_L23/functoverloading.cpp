#include<iostream>
using namespace std;
int calculate(int a, int b) {
    return a + b;
}
float calculate(float a, float b) {
    return a*b;
}
float calculate(int a, int b, int c) {
    return (a + b + c) / 3.0f;
}
int main(){
    int x = 5, y = 10, z = 15;
    float a = 2.5f, b = 3.5f;
    cout << "Sum of integers: " << calculate(x, y) << endl;
    cout << "Product of floats: " << calculate(a, b) << endl;
    cout << "Average of three integers: " << calculate(x, y, z) << endl;
    return 0;
}