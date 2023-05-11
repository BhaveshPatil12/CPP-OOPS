#include<iostream>
using namespace std;
class T4Tutorials_Parent1
{
	protected:
		int dec,remd,q;
};
class T4Tutorials_Parent2
{
	protected:
		int m,l,temp = 0;
		char s;
};
class T4Tutorials_child: public T4Tutorials_Parent1, public T4Tutorials_Parent2
{
	public: 
	void total()
		
		{
			cout<<"enter any decimal no"<<endl;
			cin>>dec;
			q=dec;
			for(l=q; l>0; l=l/16)
			{
				temp=l%16;
				if(temp<10)
				temp=temp+48;
				else
				temp=temp+55;
				dec=dec*100+temp;
			}
			cout<<"hexadecimal no=";
			for(m=dec; m>0; m=m/100)
			{
				s=m%100;
				cout<<" "<<s;
			}
		}
};
		int main()	{
		T4Tutorials_child myobj;
		myobj.total();
		return 0;
		}