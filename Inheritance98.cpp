#include<iostream>
using namespace std;
class T4Tutorials
{
	protected:
		string str;
	};
		class T4Tutorials2 : public T4Tutorials
		{
			public:
			int call()
			{
	string str="I Love Coding";
	for(int i=str.length()-1; i>=0; i--)
		cout<<str[i];
}
};
	int main()
	{
		T4Tutorials2 obj;
		obj.call();
	}