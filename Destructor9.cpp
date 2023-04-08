#include<iostream>
using namespace std;
class base {
   public:
    virtual ~base() = 0;
};
base :: ~base() {
    cout << "Pure virtual destructor is called.\n";
}
class derived : publicbase {
    public:
    ~derived() {
        cout << "Derived Destructor is called." << endl;
    }
}
int main() {
    base* b = new derived;
    delete b;
    return 0;
}