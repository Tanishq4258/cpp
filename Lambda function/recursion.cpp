#include <iostream>
#include <functional>
using namespace std;
void runtwice(function<void()> func){
    func();
    func();
}
int main(){
    auto greet =[](){cout << "Hi there!" << endl;};
    runtwice(greet);
    return 0;
}