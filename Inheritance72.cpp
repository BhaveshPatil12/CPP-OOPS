#include<iostream>
using namespace std;
class T4tutorials
{
	protected:
		string str;
	};
	class T4tutorials2
	{
		protected:
			int i;
	};
		class a : public T4tutorials, public T4tutorials2
		{
			public:
			int call()
			{
	string str="i Love Working";
	for(int i=str.length()-1; i>=0; i--)
		cout<<str[i];
}
};
	int main()
	{
		a obj;
		obj.call();
	}