#include<iostream>
using namespace std;
class T4Tutorials_Parent1
{
	protected :
		int i;
};

class pat:public T4Tutorials_Parent1
{
	protected :
		int j,r;
	public :
		int patern()
		{
			cout<<"input No of rows : ";
			cin>>r;
			for(j=1 ; j<=r ; j++)
			{
				for(i=j ; i<r ; i++)
				{
					cout<<" ";
				}
				for(i=1 ; i<=j ; i++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	pat a;
	a.patern();
 }