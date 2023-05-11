#include<iostream>
using namespace std;
class T4Tutorials_Parent1
{
	protected:
		int i,j,n;
	};
class T4Tutorials_Parent2
{
	protected:
		int decimalnumber,binarynumber;
};
class child:public T4Tutorials_Parent1,public T4Tutorials_Parent2
{
	public:
			int deci()
			{
				i=1,n,decimalnumber=n,binarynumber=0;
				cout<<"decimal number";
				cin>>n;
			}
			int bin()
			{
				for(j=n;j>0;j=j/2)
				{
					binarynumber=binarynumber+(n%2)*i;
					i=i*10;
					n=n/2;
				}
				cout<<("binarynumber=",decimalnumber,binarynumber);
			}
		};
		int main()
		{
			child A;
			A.deci();
			A.bin();
		}