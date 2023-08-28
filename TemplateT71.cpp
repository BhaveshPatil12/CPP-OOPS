#include<iostream>
#include<vector>
using namespace std;
template <typename T>
T dotProduct(const std::vector<T>& vec1, const std::vector<T>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw std::invalid_argument("Vectors must have the same size");
    }

    T result = 0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}

int main() {
    std::vector<int> intVector1 = {1, 2, 3};
    std::vector<int> intVector2 = {4, 5, 6};

    std::cout << "Dot product of integer vectors: " << dotProduct(intVector1, intVector2) << std::endl;
    return 0;
}