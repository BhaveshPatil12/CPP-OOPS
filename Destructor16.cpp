#include<iostream>
#include<string> 
using namespace std; 
class Student {               
public:
 Student (int n, string nam, char s) 
{	
	num = n;
 	name = nam;
 	sex =S; 
	cout << "Constructor called." << endl; 
}
 ~ Student () 
{
	cout << "Destructor called." << endl;
} 
void display()            
{
	cout << "num: "<< num << endl; 
	cout<<"name: "<< name << endl; 
	cout << "sex: "<< sex << endl << endl;
} 
private: 
int num; 
char name [10]; 
char sex; 
}; 
int main()                 
{                      
	Student stud1 (10010, "fawad khan",'m');    
	Stud1.display();                                                     //Output the data of student 1
	Student stud2 (10011, "abc",'f');          
	Stud2.display();      
 	return 0; 
} 