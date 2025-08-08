#include <iostream>
using namespace std;
class Point{
    public:
    Point(){
        cout << "Default constructor called" << endl;
    }
    ~Point(){
        cout << "Destructor called" << endl;
    }
};
int main(){
    Point p1; 
    return 0; 
}