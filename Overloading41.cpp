#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
const int SIZE = 10;
class saferarray
{
private:
    int arr[SIZE];
public:
saferarray()
{
    for(int i=0; i<SIZE; i++)
    {
        arr[i]=i;
    }
}
int &operator[] (int i)
{
    if(i>SIZE)
    {
     cout<<"index out of bound"<<endl;
     return arr[0];
        
    }
    return arr[i];   
}
};

int main ()
{
  saferarray a;
  cout<<"Value of A[2] : "<<a[2]<<endl;
  cout<<"Value of A[5] : "<<a[5]<<endl;
  cout<<"Value of A[12] : "<<a[12]<<endl;
}