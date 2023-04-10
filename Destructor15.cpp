#include<iostream>
using namespace std;
class Example1{ 
public:
Example1(){ 
}
~Example1(){
	cout<< "Hello I am inside a destructor" << endl;
}
void display()
{
	cout << "Hello this is a display method" << endl;
}
};
int main()
{
	Example1 ex; 
	ex.display(); 
}