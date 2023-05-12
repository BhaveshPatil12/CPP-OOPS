#include<iostream>
using namespace std;
class T4Tutorials1
{
	protected :
		int i,j;
};
class T4Tutorials2
{
	protected :
		int dn;
};
class test_3 : public T4Tutorials2,public T4Tutorials1
{
	private :
		int temp,oc_num;
	public :
		int conversion()
		{
			cout<<"Enter the octal Number : ";
			cin>>dn;
			temp=dn;
			i=1;
			for(j=dn ; j>0 ; j=j/8)
			{
				oc_num=oc_num+(j%8)*i;
				i=i*10;
			}
			cout<<"Your Entered Value is : "<<temp;
			cout<<"\tOctal Value of your Input is : "<<oc_num;
		}
};
int main()
{
	test_3 a;
	a.conversion();
}