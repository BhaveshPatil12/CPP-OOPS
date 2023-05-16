#include<iostream>
using namespace std;
class A
{
	public:
		int n;
};
class B:public A
{
	public:
		int i;
};
class C:public B
{
	public:
	int cube()
		{
			cout<<"enter the number :"<<endl;
			cin>>n;
			for(int i=0; i<n; i++)
			{
				cout<<" cube of "<<i<<" is "<<"="<<(i*i*i)<<endl;
			}
		}
};
int main()
{
	C object;
	object.cube();

}