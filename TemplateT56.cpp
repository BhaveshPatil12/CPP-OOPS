#include<iostream>
using namespace std;
template <typename T>
void printType(T value) {
    std::cout << "Generic type: " << value << std::endl;
}

template <>
void printType<double>(double value) {
    std::cout << "Specialized type (double): " << value << std::endl;
}

int main() {
    int intValue = 42;
    double doubleValue = 3.14;

    printType(intValue);
    printType(doubleValue);
    return 0;
}
