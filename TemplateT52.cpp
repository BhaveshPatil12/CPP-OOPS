#include<iostream>
#include<string>
using namespace std;
class Student {
public:
    Student(const std::string &name, int rollNumber)
        : name(name), rollNumber(rollNumber) {}

    friend std::ostream &operator<<(std::ostream &os, const Student &student) {
        os << "Name: " << student.name << ", Roll Number: " << student.rollNumber;
        return os;
    }

private:
    std::string name;
    int rollNumber;
};

template <typename T>
void display(const T &value) {
    std::cout << value << std::endl;
}

int main() {
    int number = 42;
    double pi = 3.14159;
    std::string text = "Hello, world!";
    Student student("Alice", 101);

    display(number);
    display(pi);
    display(text);
    display(student);

    return 0;
}
