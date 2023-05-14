#include<iostream>
using namespace std;
class parent_one
{
	protected:
 	int i,q;
};
class parent_two
{
	protected:
 	int n; 
};

class T4Tutorials: public parent_one ,public parent_two
{
	protected:
	int j,p;
 
	public :	
	int floyd()
	{
		cout<<"Enter No of rows : ";
		cin>>n;
		
		for(i=1 ; i<=n ; i++)
		{
			if(i%2==0)
			{
				p=1 ;
				q=0;
			}
			else
			{
				p=0;
				q=1;
			}
			
			for(j=1 ; j<=i ; j++)
			{
				if(j%2==0)
				{
					cout<<p;
				}
				else
				{
					cout<<q;
				}
			}
			
			cout<<endl;
		}
	}
};

int main()
{
	T4Tutorials a;
	a.floyd();
}