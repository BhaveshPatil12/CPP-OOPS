#include<iostream>   
using namespace std; 
class Sum_T4Tutorials
{ 
public: 
int number; 
Sum_T4Tutorials() 
{ 
number = 0; 
}   
Sum_T4Tutorials(int n) 
{ 
number = n; 
}   
Sum_T4Tutorials operator+(Sum_T4Tutorials formal_parameter)  
{  
Sum_T4Tutorials Object3;   
Object3.number = number + formal_parameter.number;  
return Object3; 
} 
};  
int main() 
{ 
Sum_T4Tutorials Object1(3);   
Sum_T4Tutorials Object2(6); 
Sum_T4Tutorials Object3;   
Object3 = Object1 + Object2; 
cout << "Sum of  Number & Inches is: " << Object3.number << endl; 
return 0; 
}