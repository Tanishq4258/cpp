#include <iostream>

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n > 0) {
        std::cout << n << " is positive." << std::endl;
    } else if (n < 0) {
        std::cout << n << " is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}