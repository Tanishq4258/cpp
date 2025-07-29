#include <iostream>
using namespace std;
void increment(int *ptr) {
    *ptr = 10;
}
int main() {
    int num=5;
    cout << "Before increment: " << num << endl;
    increment(&num);
    cout << "After increment: " << num << endl;
    return 0;
}