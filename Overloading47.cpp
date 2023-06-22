#include<iostream>
using namespace std;
class Complex {
private:
	int real, img; 
public:
	Complex(int r, int i)
	{
		real = r;
		img = i;
	}
	void operator=(const Complex& C)
	{
		real = C.real;
		img = C.img;
	}
	void print() { cout << real << "+i" << img << endl; }
};

int main()
{
	Complex C1(2, 3), C2(4, 6);
	cout << "BEFORE OVERLOADING ASSIGNMENT OPERATOR"<< endl;
	cout << "C1 complex number: ";
	C1.print();	
	cout << "C2 complex number: ";
	C2.print();	
	C1 = C2;
	cout << "AFTER OVERLOADING ASSIGNMENT OPERATOR" << endl;
	cout << "C1 complex number: ";
	C1.print();	
	cout << "C2 complex number: ";
	C2.print();
	return 0;
}
