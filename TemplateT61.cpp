#include<iostream>
#include<type_traits>
using namespace std;
template <typename T>
void printType() {
    if (std::is_integral<T>::value) {
        std::cout << "Type is integral." << std::endl;
    } else if (std::is_floating_point<T>::value) {
        std::cout << "Type is floating point." << std::endl;
    } else {
        std::cout << "Type is neither integral nor floating point." << std::endl;
    }
}

int main() {
    printType<int>();
    printType<float>();
    printType<char>();
    return 0;
}
