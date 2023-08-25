#include<iostream>
using namespace std;
template <typename T, typename U>
T customMultiply(T a, U b) {
    return a * b;
}

int main() {
    int result1 = customMultiply(5, 3.5);
    double result2 = customMultiply(2.5, 4);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    return 0;
}
