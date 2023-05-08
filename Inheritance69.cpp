#include<iostream>
using namespace std;
class one
{
	protected:
	int i,k,n,bl,ct;
};
class two
{
protected:
	char alp;
};
class child:public one,public two
{
	public:
	int pyr()
{
	ct=1;
	alp='A';
	cout<<"Input the number of letters(less than 26) in the pyramid :";
	cin>>n;
	{
	for(i=1;i<=n;i++)
	{
     for(bl=1;bl<=(n-1);bl++)
     cout<<" ";
     for(k=0;k<=(ct/2);k++)
     {
     	cout<<" "<<alp++;
	 }
	 alp=alp-2;
	 for(k=0;k<(ct/2);k++)
	 {
	 cout<<" "<<alp--;
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