#include<iostream>
using namespace std;
class T4Tutorials_first
{
	protected :
	int i;	
};
class T4Tutorials_second
{
	protected :
		int j;
};
class T4Tutorials_third : public T4Tutorials_first,public T4Tutorials_second  
{
	protected :
		int n,r;
	public :
		int pat()
	{
		cout<<"Enter no of rows : ";
		cin>>n;
		for(i=1 ; i<=n ; i++)
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<i;
			}
			cout<<endl;
		}
	}
};
int main()
{
	T4Tutorials_third a;
	a.pat();
}