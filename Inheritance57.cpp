#include<iostream>
using namespace::std;
class Single_base_class {
  public:
    int x, y;
    void data() {
      cout << "\nEnter the value of x and y ->\n";
      cin >> x >> y;
    }
};
class Derived1: public Single_base_class {
  public: 
    void subtraction() {
      cout << "\nThe Subtraction is= " << x - y;
    }
};
class Derived2: public Single_base_class {
  public: 
    void division() {
      cout << "\nThe Division is= " << x / y;
    }
};
int main() {
  Derived1 obj1;
  Derived2 obj2;
  obj1.data();
  obj1.subtraction();
  obj2.data();
  obj2.division();
  return 0;
}