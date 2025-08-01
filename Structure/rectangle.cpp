#include <iostream>
using namespace std;
struct Rectangle {
    int length;
    int width;
};
int main(){
    Rectangle r;
    r.length = 5;
    r.width = 10;
    cout << "Area: " << r.length * r.width << endl;
    return 0;
}