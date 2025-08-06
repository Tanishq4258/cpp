#include <iostream>
class Test{
    public:
    static int square(int x) {
        return x * x;
    }
};
int main(){
    int result = Test::square(5);
    std::cout << "Square of 5 is: " << result << std::endl;
    return 0;
}