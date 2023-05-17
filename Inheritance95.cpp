#include<iostream>
using namespace std;
class T4Tutorials_Parent
{
	protected:
		int r,s,i,j,c;
};
class T4Tutorials_Child:public T4Tutorials_Parent
{
	public:
		int T4Tutorials_Print()
		{
			cout<<"num of rows:";
				cin>>r;
				for(i=0;i<r;i++)
				{
					for(s=1;s<=r-i;s++)
					{
						cout<<" ";
					}
					for(j=0;j<=i;j++)
					{
						if(j==0||i==0)
						{
							c=1;
						}
						else
						{
							c=c*(i-j+1)/j;
						}
						cout<<c<<" ";
					}
					cout<<endl;
				}
			}
};
int main()
{
	T4Tutorials_Child obj;
	obj.T4Tutorials_Print();
		}		