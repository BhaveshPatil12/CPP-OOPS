#include<iostream>
#include<conio.h>
using namespace std;
class BaseClass
{
public:
   BaseClass() {
      cout << "Constructor of the BaseClass : Object Created"<<endl;
   }
   ~BaseClass() {
      cout << "Destructor of the BaseClass : Object Destroyed"<<endl;
   }
};
int main ()
{
	cout<<"Simple Destructor Scope Measurement Example Program \n\n";
	{
		cout<<"Object 1 : Creation In Braces\n\n";
		BaseClass des1; 
	}
    cout<<"Object 2 : Creation in Main Part\n\n";
    BaseClass des2;
	return 0;
}