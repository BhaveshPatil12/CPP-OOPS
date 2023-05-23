#include<iostream>   
using namespace std; 
class T4Tutorials_Height 
{ 
public: 
int feet, inches; 
T4Tutorials_Height() 
{ 
feet = 0; 
inches = 0; 
}  
T4Tutorials_Height(int f, int i) 
{ 
feet = f; 
inches = i; 
}   
T4Tutorials_Height operator+(T4Tutorials_Height formal_parameter) // Call by value
{  
T4Tutorials_Height h3;   
h3.feet = feet + formal_parameter.feet; 
h3.inches = inches + formal_parameter.inches;  
return h3; 
} 
};  
int main() 
{ 
T4Tutorials_Height h1(5, 2);   
T4Tutorials_Height h2(5, 4); 
T4Tutorials_Height h3;   
h3 = h1 + h2; 
cout << "Sum of  Feet & Inches: " << h3.feet << "'" << h3.inches << endl; 
return 0; 
}