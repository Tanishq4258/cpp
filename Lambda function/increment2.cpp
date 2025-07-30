#include <iostream>
using namespace std;

int main(){
    int a=5, b=10;
        auto inc = [&](){
        a++;
        b++;
    };
    inc();
    cout << a<< " " <<b;
}