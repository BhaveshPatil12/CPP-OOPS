#include<iostream>
using namespace std;
class T4Tutorials
{
	protected:
		int i,j;
};
class child1: public T4Tutorials
{
	protected:
	int s,rows;		
};
class child2: public child1
{
	public: int pattern()
	{
		cout<<"enter no of rows";
		cin>>rows;
		for(i=1; i<=rows; i++)
		{
			for(s=i; s<rows; s++)
			{
				cout<<" ";
			}
			for(j=1; j<=2*i-1; j++)
			{
				cout<<"*";
			}
			cout<<"\n";
		}
	}
};
int main()
{
child2 myobj;
myobj. pattern();
}