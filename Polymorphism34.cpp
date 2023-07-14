#include<iostream>
using namespace std;

class Prep {
  public:
  void sum(int a)
  {
    cout << "Sum of the int type variable is:" << a << endl;
  }
  void sum(double a) {
    cout << "sum of the double type variable is:" << a << endl;
  }
  void sum(int a, int b) 
  {
    cout << "Sum of int type variables are:" << a + b << endl;
  }
   void sum(double a, double b) 
  {
    cout << "Sum of double type variables are:" << a + b << endl;
  }
};

int main() {
  Prep obj;
  obj.sum(5);
  obj.sum(500.263);
  obj.sum(5,3);
  obj.sum(5.333,3.167);
return 0;
}