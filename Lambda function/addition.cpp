#include <iostream>
using namespace std;
auto add = [](int a, int b){
    return a+b;
};
int main(){
    int a=5, b=6;
    int result = add(a,b);
    cout << result << endl;
}