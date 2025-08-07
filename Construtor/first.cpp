#include <iostream>
using namespace std;
class demo{
    public:
    int x;   
    demo(int a){
        x=a;
    }
};
int main(){
    demo d1(10);
    cout << d1.x << endl;
    return 0;
}