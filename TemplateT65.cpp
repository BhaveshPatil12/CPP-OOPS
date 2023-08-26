#include<iostream>
using namespace std;
template <typename T>
void print(const T& value) {
    std::cout << value << " ";
}

template <typename T, typename... Args>
void print(const T& value, const Args&... args) {
    std::cout << value << " ";
    print(args...);
}

int main() {
    print(1, 2.5, "Hello", 'A');
    std::cout << std::endl;
    return 0;
}