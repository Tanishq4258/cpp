#include <iostream>
using namespace std;
auto inc = [=](int &a, int &b){
    a++;
    b++;
};
int main(){
    int a=5, b=10;
    inc(a,b);
    cout << a<< " " <<b;
}