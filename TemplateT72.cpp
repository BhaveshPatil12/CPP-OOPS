#include<iostream>
using namespace std;
template <typename T, size_t Size>
void reverseArray(T (&arr)[Size]) {
    for (size_t i = 0; i < Size / 2; ++i) {
        std::swap(arr[i], arr[Size - i - 1]);
    }
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {2.5, 3.5, 4.5, 5.5};

    reverseArray(intArray);
    reverseArray(doubleArray);

    std::cout << "Reversed integers: ";
    for (int num : intArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Reversed doubles: ";
    for (double num : doubleArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}