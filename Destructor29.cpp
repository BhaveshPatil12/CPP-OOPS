#include<iostream>
#include<memory>
using namespace std;
class Base
{
public:
    Base(){
        cout << "Base Constructor Called\n";
    }
    ~Base(){
        cout << "Base Destructor called\n";
    }
};
class Derived: public Base
{
public:
    Derived(){
        cout << "Derived constructor called\n";
    }
    ~Derived(){
        cout << "Derived destructor called\n";
    }
};

int main()
{
    shared_ptr<Base> b(new Derived());
}