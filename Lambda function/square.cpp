#include <iostream>
#include <functional>
using namespace std;

int main(){
    auto square = [](int x) { return x * x; };
    int n;
    cin >> n;
    cout << "Square of " << n << ": " << square(n) << endl;
    return 0;
}