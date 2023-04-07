#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;
class MyClass {
public:
    explicit MyClass(string s):
            str(std::move(s)) { cout << "Constructor 1 executed\n"; }

    MyClass(const MyClass &s):
            str(string(s.str)) { cout << "Constructor 2 executed\n"; }

    ~MyClass() { cout << "Destructor executed\n"; }

    string& getString() { return str; };
private:
    string str;
};

int main()
{
    MyClass str1("Hello There! ");

    cout << endl;
    cout << "str1: " << str1.getString() << endl;
    cout << endl;
    str1.~MyClass();
    return EXIT_SUCCESS;
}