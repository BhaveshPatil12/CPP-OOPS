#include<iostream>
using namespace::std;
class Base {
  public:
    float salary = 900;
};
class Derived: public Base {
  public: 
    float bonus = 100;
    void sum() {
      cout << "Your Total Salary is: " << (salary + bonus) << endl;
    }
};
int main() 
{
  Derived x;
  cout << "Your Salary is:" << x.salary << endl;
  cout << "Your Bonus is:" << x.bonus << endl;
  x.sum();
  return 0;
}