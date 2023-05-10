#include<iostream>
using namespace std;
class A
{
	protected:
		int n;
};
class B
{
	protected:
		int i;
};
class child:public A, public B
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
	child obj;
	obj.cube();
}