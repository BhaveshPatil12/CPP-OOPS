#include<iostream>
using namespace std;
class T4Tutorials
{
	protected :
		int en, sn;
};
class second
{
	protected :
		int i, n; 
};
class third : public T4Tutorials , public second
{
	protected :
		int n1, s1 , j, k;		
	public :
		int find()
		{
			s1 = 0;
		    long fact;
		    cout << "Find Strong Numbers within an range of numbers:"<<endl;
		    cout << "--------------------"<<endl;
		    cout << "Input starting range of number: "<<endl;
		    cin >> sn;
		    cout << "Input ending range of number: "<<endl;
		    cin >> en;
		    cout << "The Strong numbers are: "<<endl;
		    for (k = sn; k <= en; k++) 
		    {
		        n1 = k;
		        s1 = 0;
		        for (j = k; j > 0; j = j / 10) 
		        {
		            fact = 1;
		            for (i = 1; i <= j % 10; i++) 
		            {
		                fact = fact * i;
		            }
		            s1 = s1 + fact;
		        }
		        if (s1 == n1)
		            cout << n1 << "  "<<endl;
		    }
		    cout << endl;
		}
};
int main()
{
	third a;
	a.find();
}