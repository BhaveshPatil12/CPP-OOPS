#include<iostream>
using namespace std;
class b1 { 
public:
b1() 
{
	cout << "Hello this is base constructor" << endl;
}
~b1() 
{
	cout << "Hello this is base destructor" << endl;
}
};
class b2: public b1{
};
b2() 
{
	cout << "Hello this is derived constructor" << endl;
}
~ b2() 
{
	cout << "Hello this is derived destructor" << endl;
}
};
int main(void) 
{
	b2 *der = new b2();
	b1 *bas = der;
	delete der;
	getchar();
	return 0;
}