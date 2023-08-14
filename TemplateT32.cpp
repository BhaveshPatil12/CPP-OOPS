#include<iostream>
using namespace std;
template <class Test> Test addition(Test num1, Test num2)  
{
        return (num1+num2);
}
int main()
{
        cout<<"\n Addition of Multiple Types of Data using Generic Template";
        cout<<"\n Addition of Integer Parameters : "<<addition(10, 10);
        cout<<"\n Addition of Float Parameters : "<<addition(15.5, 20.10);    
        return 0;
}