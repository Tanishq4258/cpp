#include <iostream>
using namespace std;
class point{
    private:
    int x, y;
    public:
    point(int a, int b): x(a), y(b) {
        std :: cout << "point initiated with x: " << x << " and y: " << y << endl;
    }
};
int main(){
    point p1(3,4);
    return 0;
}