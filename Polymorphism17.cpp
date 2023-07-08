#include<iostream>    
using namespace std;    
class Animal 
{                                           
    public:
	string color = "White";      
};     
class Rabbit: public Animal                      
{      
	public:    
    string color = "pink";      
};    
int main(void) 
{    
    Animal r= Rabbit();      
    cout<<r.color;     
} 