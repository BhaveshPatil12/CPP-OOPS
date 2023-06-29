#include<iostream>
using namespace std;
class Tutorial
{
	private :
		int num;
	public :
		void input()
		{
			cin>>num;
		}
		int operator >=(Tutorial formal_parameter)
		{
			if(num>= formal_parameter.num)
			return 1;
			else
			return 0;
		}
};
int main()
{
	Tutorial object1, object2;
	cout<<"Please  enter 1st number.  ";
	object1.input();
	cout<<" Please  enter 1st number .";
	object2.input();
	if(object1>= object2)
	{
		cout<<"Value of object1 is greater than Value of  object2 or Value of object1 is equal to Value of object2. ";
	}
	else
	{
		cout<<" Value of object1 is not greater than, nor equal to Value of object2";
	}
 return 0;
}