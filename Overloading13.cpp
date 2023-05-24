#include<iostream>
#include<conio.h>
using namespace std;
class T4Tutorials
{
	int a,b,c;
	public:
	T4Tutorials()
{
	a=-1;
	b=1;
	c=a+b;
}
void show()
{
	cout<<c<<" ";
}
void operator++()
{
	a=b;
	b=c;
	c=a+b;
}
};
int main()
{
	int n,i;
	T4Tutorials f1;
	cout<<"Please Enter the limit of the series: ";
	cin>>n;
for(i=0;i<n;i++)
{
	f1.show();
	++f1;
}
}