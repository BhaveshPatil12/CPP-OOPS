#include<iostream>
using namespace std;
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 10;
    double a = 3.14, b = 2.71;

    swapValues(x, y);
    swapValues(a, b); 

    std::cout << "x: " << x << ", y: " << y << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    return 0;
}
