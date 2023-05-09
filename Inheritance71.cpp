#include<iostream>
using namespace std;
class T4Tutorials
{
	protected :
		int n1,df;
};
class T4Tutorials2
{
	protected :
		int ln, s1;
};
class T4Tutorials3 : public T4Tutorials , public T4Tutorials2
{
	protected :
		int n2, i;
	public :
		int apseries()
		{
		    s1 = 0;
		    cout << "Find out the sum of A.P. series :"<<endl;
		    cout << "-------"<<endl;
		    cout << "Input  the starting number of the A.P. series: "<<endl;
		    cin >> n1;
		    cout << "Input the number of items for  the A.P. series: "<<endl;
		    cin >> n2;
		    cout << "Input  the common difference of A.P. series: "<<endl;
		    cin >> df;
		    s1 = (n2 * (2 * n1 + (n2 - 1) * df)) / 2;
		    ln = n1 + (n2 - 1) * df;
		    cout << "The Sum of the  A.P. series are : " << endl;
		    for (i = n1; i <= ln; i = i + df) 
		    {
		        if (i != ln)
		            cout << i << " + "<<endl;
		        else
		            cout << i << " = " << s1 << endl;
		    }
		}

};
int main()
{
	T4Tutorials3 a;
	a.apseries();
}
