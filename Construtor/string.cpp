#include <iostream>
#include <string>
using namespace std;
class demo {
    public:
    int x;
    string str;
    demo(string s) {
        str = s;
    }
};
int main() {
    demo d1("Hello");
    cout << "Value of str: " << d1.str << endl;
    return 0;
}       