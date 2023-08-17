#include<iostream>
using namespace std;
template<typename T>
T
AbsoluteValue(T tNumber)
{
	return (tNumber>0)? tNumber:-tNumber;
}

int
main( void)
{
	int nNumber1 =  7, 
	    nNumber2 = -7;

	cout<<"Absolute value  of  "
	    <<nNumber1<<"  = "
	    <<AbsoluteValue(nNumber1)<<endl;

	cout<<"Absolute value of "
	    <<nNumber2<<"  = "
	    <<AbsoluteValue(nNumber2)<<endl;

	double dNumber1 = 7.0923, 
	       dNumber2 =-7.0923;

	cout<<"Absolute value of"
	    <<dNumber1<<"  = "
	    <<AbsoluteValue(dNumber1)<<endl;

	cout<<"Absolute value of "
	    <<dNumber2<<"  = "
	    <<AbsoluteValue(dNumber2)<<endl;

	int iExit; cin>>iExit;
}