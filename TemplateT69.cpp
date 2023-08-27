#include<iostream>
using namespace std;
template <typename T>
T average(const T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int intArray[] = {5, 10, 15, 20, 25};
    double doubleArray[] = {3.5, 2.0, 4.5, 1.5};

    std::cout << "Average of integers: " << average(intArray, 5) << std::endl;
    std::cout << "Average of doubles: " << average(doubleArray, 4) << std::endl;
    return 0;
}