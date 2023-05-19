#include<iostream>
using namespace std;
class A
{
	protected:
		int i,j,k;
};
class B: public  A
{
     protected:
     	int n;
}; 
class C: public B
{
	public:
		int T4Tutorials_Print()
		{
				cout<<"num of rows:";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n-i;j++)
				{
					cout<<" ";
				}
				for(k=1;k<=n;k++)
				{
					cout<<"*";
				}
				cout<<endl;					
					}
		}
};
int main()
{
	C obj;
	obj.T4Tutorials_Print();
}