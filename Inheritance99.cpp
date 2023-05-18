#include<iostream>
using namespace std;
class decimal
{
	public:
		int i=1,j=n,n,Decimal_No=n,Binary_No=0;
	};
class T4Tutorials_Child:public decimal
{
	public:
			int deci()
			{
				cout<<"decimal number";
				cin>>n;
			}
			int bin()
			{
				for(j=n;j>0;j=j/2)
				{
					Binary_No=Binary_No+(n%2)*i;
					i=i*10;
					n=n/2;
				}
				cout<<("Binary_No=",Decimal_No,Binary_No);
			}
		};
		int main()
		{
			T4Tutorials_Child A;
			A.deci();
			A.bin();
		}