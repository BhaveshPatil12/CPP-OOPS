#include<iostream>
#include<vector>
using namespace std;
template <typename T>
int binarySearch(const std::vector<T>& sortedVec, T target) {
    int left = 0;
    int right = sortedVec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (sortedVec[mid] == target) {
            return mid;
        } else if (sortedVec[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    std::vector<int> sortedVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;

    int index = binarySearch(sortedVec, target);

    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << target << " not found." << std::endl;
    }
    return 0;
}