#include<iostream>
using namespace std;
class A
{
	protected:
		int r,s,c;
};
class B
{
    protected:
    	int i,j;
};
class C:public A,public B
{
	public:
		int T4Tutorials_Print()
		{
			cout<<"num of rows:";
				cin>>r;
				for(i=0;i<r;i++)
				{
					for(s=1;s<=r-i;s++)
					{
						cout<<" ";
					}
					for(j=0;j<=i;j++)
					{
						if(j==0||i==0)
						{
							c=1;
						}
						else
						{
							c=c*(i-j+1)/j;
						}
						cout<<c<<" ";
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