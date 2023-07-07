#include<iostream> 
using namespace std;
class Base
{
public:
  void show()
  {
     cout << "Showing Base Class" << endl;
  }
};
class Derived:public Base
{
public:
  void show()
  {
     cout << "Showing Derived Class" << endl; } }; int main() { Base *base_object; // pointer reference to base class Base *base_object; // creating derived class object Derived derived_object; base_object->show(); // mapping base object to address of derived class object base_object = &derived_object; // since we use pointers so we use -> rather than .
  return 0;
}