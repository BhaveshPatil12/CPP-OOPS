#include<iostream>
#include<vector>
using namespace std;
class Person {
public:
    Person(std::string name, int age) : name(name), age(age) {}

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

private:
    std::string name;
    int age;
};

template <typename T>
void printInfo(const T& item) {
    std::cout << "Name: " << item.getName() << ", Age: " << item.getAge() << std::endl;
}

int main() {
    Person person1("Alice", 25);
    Person person2("Bob", 30);

    printInfo(person1);
    printInfo(person2);
    return 0;
}