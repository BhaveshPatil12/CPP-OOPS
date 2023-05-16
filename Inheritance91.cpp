#include<iostream>
using namespace std;
class A
{
 protected:
 	int n1,n2,i,T4Tutorials_HCF;
 public:
 	A()  
 	{
 	   n1=54;
	   n2=4;	
	}
};
class B:public A
{
 public:
	void calc()
	{
		for(i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0&&n2%i==0)
		T4Tutorials_HCF=i;
	}
	}
};
class C:public B
{
 public:
	void disp()
	{
		cout<<"HCF of "<<n1<<" and "<<n2<<" is "<<T4Tutorials_HCF<<endl;
	}
};
int main()
{
	C obj;
	obj.calc();
	obj.disp();
}