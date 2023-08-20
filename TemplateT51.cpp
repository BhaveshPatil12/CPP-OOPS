#include<iostream>
using namespace std;
template <typename T>
void printType(T value) {
    std::cout << "Generic: " << value << std::endl;
}

template <>
void printType<double>(double value) {
    std::cout << "Specialized: " << value << std::endl;
}

int main() {
    printType(5);
    printType(3.14);
    return 0;
}
