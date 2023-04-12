#include<iostream>
class Test {
public:
	virtual ~Test() = 0;
}
Test::~Test() {}
int main()
{
	Test;
	Test* t1 = new Test;
	return 0;
}