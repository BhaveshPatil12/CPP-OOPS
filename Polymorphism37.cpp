#include<iostream>
using namespace std;
class complex
{
	int r, i;
public:
void read()
{
	cin>>r>>i;
}
void display()
{
	cout<<r<<i;
}
complex operator+(complex c1)
{
	complex c3;
	c3.r=r+c1.r;
	c3.i=i+c1.i;
	return(c3);
}
};
int main()
{
	complex c1,c2,c3;
	c1.read();
	c2.read();
	c3=c1+c2; 
	c3.display();
	return 0;
}
