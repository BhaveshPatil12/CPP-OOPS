#include<iostream>
using namespace std;
template <typename T>
class Pair {
public:
    Pair(T first, T second) : first(first), second(second) {}
    T getFirst() const { return first; }
    T getSecond() const { return second; }

private:
    T first;
    T second;
};

int main() {
    Pair<int> intPair(5, 10);
    Pair<double> doublePair(3.14, 2.71);

    std::cout << "Int pair: " << intPair.getFirst() << ", " << intPair.getSecond() << std::endl;
    std::cout << "Double pair: " << doublePair.getFirst() << ", " << doublePair.getSecond() << std::endl;
    return 0;
}
