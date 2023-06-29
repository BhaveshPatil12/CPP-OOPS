#include<iostream>
using namespace std;                               
int add(int a, int b) 
{
    cout << "Sum of a + b (integer value) = " <<  a + b << endl;
}                             
int add(int a, int b, int c) 
{
    cout  << "Sum of a + b + c (floating point value) = "  << a + b + c << endl;
}
                                      
int main() {                                         
    add (1, 2);
    add (1.5, 2.5, 3.5);                       
    return 0;
}