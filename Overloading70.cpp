#include<iostream>
using namespace std;
float sum(int a, float b)
{
    float s=0;
    s=a+b;
    return s;
}

double sum(int a, float b, double c)
{
    double s=0;
    s=a+b+c;
    return s;
}

int main()
{
    int x;
    float y;
    double z;
    cout<<"Enter one integer and one decimal numbers"<<endl;
    cin>>x>>y;
    cout<<"Sum = "<<sum(x,y)<<endl;;
    cout<<"Enter one integer and two decimal numbers"<<endl;
    cin>>x>>y>>z;
    cout<<"Sum = "<<sum(x,y,z);
    return 0;
}