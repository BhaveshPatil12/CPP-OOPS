#include<iostream>
using namespace std;
template <typename T>
T power(T base, int exponent) {
    T result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int baseInt = 2;
    double baseDouble = 1.5;
    int exponent = 3;

    std::cout << baseInt << "^" << exponent << " = " << power(baseInt, exponent) << std::endl;
    std::cout << baseDouble << "^" << exponent << " = " << power(baseDouble, exponent) << std::endl;
    return 0;
}