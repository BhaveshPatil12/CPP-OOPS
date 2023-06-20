#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class decre
{
private:
  int data;
public:
    decre ()
  {

    data = 0;
  }
  decre operator-- ()
  {
    decre temp;
    temp.data = ++data;
    return temp;

  }
  decre operator-- (int)
  {
    decre temp;
    temp.data = data++;
    return temp;

  }
  void display ()
  {
    cout << "Data = " << data << endl;

  }

};

int main ()
{
  decre obj, obj1;
  cout << "Before decrement operation the value of obj:";
  obj.display ();
  cout << "Before  decrement operation the value of obj1:";
  obj1.display ();
  obj1 = --obj;
  cout << "After postfix decrement operation the value of obj:";
  obj.display ();
  cout << "After postfix decrement operation the value of obj";
  obj1.display();
  obj--;
  cout<<"After Postfix decrement operation the value of obj:";
  obj.display();
  cout<<"After Postfix decrement operation the value of obj1:";
  obj1.display();

}