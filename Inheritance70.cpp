#include<iostream>
using namespace std;
class one
{ 
protected:
	int i,j;
};
class two
{
	protected:
	int	n;
};
class child:public one,public two  
{
	public:
		int in()
		{
		cout<<"enter number ";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==1||i==n||j==1||j==n)
				{
					cout<<"*";
				}
				else 
				{
					cout<<" ";
				}
			}
			cout<<" \n";
		}
	}
};
int main()
{
	 child  c;
  	c.in();
}