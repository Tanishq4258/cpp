#include <iostream>
namespace myMath{
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0.0; // Handle division by zero
        }
        return static_cast<double>(a) / b;
    }
}
int main() {
    using namespace myMath;

    int a = 10;
    int b = 5;
    int result = myMath::add(a, b);
    return 0;
}