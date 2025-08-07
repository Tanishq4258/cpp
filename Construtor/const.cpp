#include <iostream>
using namespace std;
class Example{
    private:
    const int value;
    int &ref;

    public:
    Example(int v, int &r) : value(v), ref(r) {
        cout << "const value " << value << " reference: " << ref << endl;
    }
};
int main() {
    int num = 10;
    Example ex(5, num);
    return 0;
}