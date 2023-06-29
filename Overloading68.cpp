#include<iostream>
using namespace std;
class Tutorials
{
	private :
		int num;
	public :
		void input()
		{
			cin>>num;
		}
		int operator < (Tutorials x)
		{
			if(num<x.num)
			return 1;
			else
			return 0;
		}
};
int main()
{
	Tutorials n1,n2;
	cout<<"Please  enter 1st number.  ";
	n1.input();
	cout<<" Please  enter 1st number .";
	n2.input();
	if(n1<n2)
	{
		cout<<"n1 is less than n2. ";
	}
	else
	{
		cout<<"n1 is not less than n2. ";
	}
 return 0;
}