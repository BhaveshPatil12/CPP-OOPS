#include<iostream>
using namespace std;
class a
{
	protected:
		int no,n;
		public:
			void get()
			{
				cout<<"enter a numer of rows=";
				cin>>no;
				n=no;
			}
};
class b
{
	protected:
		int r,sp,disp;
};
class c:public a,public b
{
	public:
		void display()
		{
			for(r=1;r<=no;r++)
			{
				for(sp=1;sp<n;sp++)
				{
				cout<<" ";	
				}
				n--;
				for(disp=1;disp<=r;disp++)
				{
					cout<<" "<<r;
				}
				cout<<endl;
			}
		}
};
int main()
{
	c myobj;
	myobj.get();
	myobj.display();
}