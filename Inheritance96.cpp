#include<iostream>
using namespace std;
class pyramid
{
	protected:
	int i,k,j,bl,n,ct;
	char alp;
};
class child:public pyramid
{
	public:
	int pyr()
{
	ct=1;
	alp='A';
	cout<<"Input the number of letters(less than 26) in the pyramid: ";
	cin>>n;
	{
	for(i=1;i<=n;i++)
	{
     for(bl=1;bl<=n-1;bl++)
     cout<<" ";
     for(j=0;j<=(ct/2);j++)
     {
     	cout<<alp++;
	 }
	 alp=alp-2;
	 for(j=0;j<(ct/2);j++)
	 {
	 cout<<alp--;
     }
	ct=ct+2;
	alp='A';
    cout<<endl;
	 }
}
}
	};
	int main()
	{
		child c;
		c.pyr();
	}