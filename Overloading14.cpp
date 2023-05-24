#include<iostream>
#include<conio.h>
using namespace std;
class T4Tutorials
{
private:
 int x, y;
 public:
 void DataByUser ()
 {
  cout <<" Please enter the value of x and y for object1.."<<endl;
  cin>> x>>y;
 }
 void operator = (T4Tutorials obj)
 {
  x= obj.x;
  y= obj.y;
 }
 void display ()
 {
	cout<<" value of x="<<x<<endl;  
	cout<<" value of y="<<y<<endl;
 }
};

int main ()
{
 T4Tutorials Object1, Object2;
 Object1.DataByUser ();
 Object1.display ();
 Object2=Object1;
 cout<<"after assigning values of object 1 to object 2."<<endl;
 Object2.display();
}