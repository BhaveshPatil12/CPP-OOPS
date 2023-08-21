#include<iostream>
using namespace std;
template <typename T, int size>
T accumulate(T (&arr)[size]) {
    T sum = arr[0];
    for (int i = 1; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {3.14, 2.71, 1.618};

    int sumInt = accumulate(intArray);
    double sumDouble = accumulate(doubleArray);

    std::cout << "Sum of integers: " << sumInt << std::endl;
    std::cout << "Sum of doubles: " << sumDouble << std::endl;
    return 0;
}