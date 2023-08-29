#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template <typename T>
std::vector<T> findUnique(const std::vector<T>& vec) {
    std::vector<T> uniqueVec = vec;
    std::sort(uniqueVec.begin(), uniqueVec.end());
    auto it = std::unique(uniqueVec.begin(), uniqueVec.end());
    uniqueVec.erase(it, uniqueVec.end());
    return uniqueVec;
}

int main() {
    std::vector<int> intVec = {1, 2, 3, 2, 4, 1, 5};
    std::vector<double> doubleVec = {2.5, 3.7, 1.2, 4.8, 3.7, 2.5};

    std::vector<int> uniqueInts = findUnique(intVec);
    std::vector<double> uniqueDoubles = findUnique(doubleVec);

    std::cout << "Unique integers: ";
    for (const int& num : uniqueInts) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Unique doubles: ";
    for (const double& num : uniqueDoubles) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}