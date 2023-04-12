#include<iostream>
using namespace std;
class Base {
public:
	virtual ~Base() = 0;
};
class Derived : public Base {
public:
	~Derived() { cout << "~Derived() is executed"; }
};
int main()
{
	Base* b = new Derived();
	delete b;
	return 0;
}
