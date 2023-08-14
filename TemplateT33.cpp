#include<iostream>
using namespace std;
template<class Test> Test FindLarge(Test num1,Test num2, Test num3)  
{  
        if(num1>=num2)  
        {
                if(num1>=num3)
                        return num1;  
                else
                        return num3;
        }
        else
        {
                if(num2 >= num3)  
                        return num2;  
                else  
                        return num3;
        }
}  
int main()
{
        int num1, num2, num3, large;
    
        cout << "\n Enter Three Numbers";
        cout<<"\n --------------------------";
        cout<<"\n First Number : ";
        cin>>num1;
   
        cout<<"\n Second Number : ";
        cin>>num2;
   
        cout<<"\n Third Number : ";
        cin>>num3;
        large=FindLarge(num1,num2,num3);
        cout<<"\n Largest Number is : "<<large;
        return 0;
}