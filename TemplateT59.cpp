#include<iostream>
using namespace std;
template <typename T, int size>
class Array {
private:
    T elements[size];

public:
    T& operator[](int index) {
        return elements[index];
    }
};

int main() {
    Array<int, 5> intArray;
    Array<double, 3> doubleArray;

    intArray[0] = 10;
    doubleArray[2] = 3.14;

    std::cout << "intArray[0]: " << intArray[0] << std::endl;
    std::cout << "doubleArray[2]: " << doubleArray[2] << std::endl;
    return 0;
}

