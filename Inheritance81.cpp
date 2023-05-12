#include<iostream>
using namespace std;
class A 
{
	public:
		int r;
};
class B 
{
	public:
	 int sp;
};      
class C:public A, public B
{
	public:
	void disp()
	{
	for(r=1;r<=4;r++)  
	{
		for(sp=r;sp<4;sp++)
		{
			cout<<" ";
		}
		if(r==1||r==4)
		{
			for(sp=1;sp<=4;sp++) 
			{
				cout<<"*";
			}
		}
		else 
		{
			cout<<"*";
			for(sp=1;sp<=2;sp++)
			{
				cout<<" ";
			}
			cout<<"*";
		}
	    cout<<endl;
		
	}
	
   }	
};
    int main()
    {
    C T4Tutorials;
    T4Tutorials.disp();
    }