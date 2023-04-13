#include<iostream>
using namespace std;
class A {
public:
	int sum = 0;
	A(); 
	A(int a, int x = 0) 
	{
		sum = a + x;
	}
	void print() { cout << "Sum =" << sum << endl; }
};
int main()
{
	A obj1(50,100);
	A obj2(10);
	obj1.print();
	obj2.print();
	return 0;
}