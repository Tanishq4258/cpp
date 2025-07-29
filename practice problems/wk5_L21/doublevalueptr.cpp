#include <iostream>
using namespace std;

void doubleValue(int *x) {
    *x = *x * 2;
}

int main() {
    int num = 11;
    doubleValue(&num);
    cout << num << std::endl;
    return 0;
}