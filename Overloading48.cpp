#include<iostream>
using namespace std;
class T4
{
	private :
		int num;
	public :
		void input()
		{
			cin>>num;
		}
		int operator >(T4 x)
		{
			if(num>x.num)
			return 1;
			else
			return 0;
		}
};
int main()
{
	T4 n1,n2;
	cout<<"Please  enter 1st number.  ";
	n1.input();
	cout<<" Please  enter 2nd number.";
	n2.input();
	if(n1>n2)
	{
		cout<<"n1 is greater than n2. ";
	}
	else
	{
		cout<<"n1 is not greater than n2. ";
	}
 return 0;
}