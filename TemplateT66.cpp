#include<iostream>
using namespace std;
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int intArray[] = {5, 2, 8, 1, 3};
    double doubleArray[] = {3.14, 2.71, 1.41, 2.05};

    bubbleSort(intArray, 5);
    bubbleSort(doubleArray, 4);

    std::cout << "Sorted integers: ";
    for (int num : intArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted doubles: ";
    for (double num : doubleArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}