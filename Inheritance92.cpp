#include<iostream>
using namespace std;
class T4Tutorials1
{
	public:
		long int num,i;
	};
class T4Tutorials2:public T4Tutorials1
{
	public:
		int sum=0,k=9;
	};
class series3:public T4Tutorials2
	{
		public:
			int function()
			{
				cout<<"input the number of terms";
				cin>>num;
				for(i=1;i<=num;i++)
				{
					sum=sum+k;
					k=k*10+9;
				}
				cout<<"sum of series"<<sum;
			}
		};
		int main()
		{
			series3 obj;
			obj.function();
		}