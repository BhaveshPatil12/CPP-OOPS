#include<iostream>
using namespace std;
template <typename T, typename U>
void printAndSum(T a, U b) {
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "Sum: " << a + b << std::endl;
}

int main() {
    int intVal = 10;
    double doubleVal = 2.5;
    printAndSum(intVal, doubleVal);
    return 0;
}