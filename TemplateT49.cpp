#include<iostream>
using namespace std;
template <typename T>
T arraySum(T arr[], int size) {
    T sum = arr[0];
    for (int i = 1; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "Sum of integers: " << arraySum(intArray, 5) << std::endl;
    std::cout << "Sum of doubles: " << arraySum(doubleArray, 5) << std::endl;
    return 0;
}
