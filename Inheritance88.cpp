#include<iostream>
using namespace std;
class even
{
	public:
		int n;
};
class B
{
	public:
		int a;
};
class s:public even,public B
{
	public:
		int sum()
		{
			 
			cout<<"enter the value : To print Even Number"<<endl;
			cin>>n;
			a=0;
			for(int i=1;i<=n;i++)
			{
				cout<<2*i-1<<" ";
				a=a+(2*i-1);
				cout<<endl;
			}
			cout<<"sum of given input  = "<<a;
		}
};
int main()
{
	s um;
	um.sum();
}