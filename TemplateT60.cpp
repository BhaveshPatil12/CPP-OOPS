#include<iostream>
#include<string>
using namespace std;
template <typename T>
void printValue(T value) {
    std::cout << "Value: " << value << std::endl;
}

template <>
void printValue<std::string>(std::string value) {
    std::cout << "String: " << value << std::endl;
}

int main() {
    int intValue = 42;
    double doubleValue = 3.14;
    std::string stringValue = "Hello, World!";

    printValue(intValue);
    printValue(doubleValue);
    printValue(stringValue);
    return 0;
}
