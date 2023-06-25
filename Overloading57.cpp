#include<iostream>
using namespace std;
int area(int s)
{
    cout<<"Area of square="<<s*s <<endl;
    return 0;
}
int area(int l, int b)
{
    cout<<"Area of reactangle=" <<l*b<<endl;
    return 0;
}
int main()
{
    area(12);
    area(20,10);
}