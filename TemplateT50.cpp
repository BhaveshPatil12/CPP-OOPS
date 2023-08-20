#include<iostream>
using namespace std;
template <typename T>
class Container {
public:
    Container(T value) : data(value) {}
    T getValue() const { return data; }

private:
    T data;
};

int main() {
    Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);

    std::cout << "Int container value: " << intContainer.getValue() << std::endl;
    std::cout << "Double container value: " << doubleContainer.getValue() << std::endl;
    return 0;
}