#include<iostream>
using namespace std;
template <typename T>
int linearSearch(const T arr[], int size, T target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}
int main() {
    int intArray[] = {5, 12, 8, 23, 9};
    double doubleArray[] = {3.14, 1.41, 2.71, 2.05};

    int intTarget = 8;
    double doubleTarget = 2.71;

    std::cout << "Index of " << intTarget << " in intArray: "
              << linearSearch(intArray, 5, intTarget) << std::endl;
    
    std::cout << "Index of " << doubleTarget << " in doubleArray: "
              << linearSearch(doubleArray, 4, doubleTarget) << std::endl;
    return 0;
}