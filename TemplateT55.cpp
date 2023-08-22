#include<iostream>
#include<vector>
using namespace std;
template <typename T>
T vectorSum(const std::vector<T> &vec) {
    T sum = T();
    for (const T &element : vec) {
        sum += element;
    }
    return sum;
}

int main() {
    std::vector<int> intVector = {1, 2, 3, 4, 5};
    std::vector<double> doubleVector = {1.1, 2.2, 3.3, 4.4, 5.5};

    int sum_int = vectorSum(intVector);
    double sum_double = vectorSum(doubleVector);

    std::cout << "Sum of integers: " << sum_int << std::endl;
    std::cout << "Sum of doubles: " << sum_double << std::endl;
    return 0;
}