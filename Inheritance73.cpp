#include<iostream>
#include<math.h>
using namespace std;
class T4Tutorials
{
	protected:
	int n1,num,result=0;
};
class T4Tutorials2
{
   protected:
   	int n=0;
   	int r;
};
class T4tutorials_child: public T4Tutorials, public T4Tutorials2
{

  public:
		int function()
		{
		cout<<"check wether the number is armstromg or not :"<<endl;
	cin>>n;	
	num=n1;
	while(num!=0)
	{
		num/=10;
		n++;
	}
	num=n1;
	while(num !=0)
	{
		r=num%10;
		result+=pow(r , n);
		num /=10;
	}
	if(result==n1)
	cout<<"is an armstrong number :"<<endl;
	else
	cout<<" is not an armstrong number :"<<endl;
}
};
int main()
{
	T4tutorials_child obj;
	obj.function();
}