#include<iostream>
using namespace std;
class Example {
   public :
   void func(int a) {
      cout << "\nThe value of a: " << a;
   }
   void func(int a, int b) {
      cout << "\nThe value of a: " << a;
      cout << "\nThe value of b: " << b;
   }
   void func(char c) {
      cout << "\nThe value of c: " << c;
   }
};
int main() {
   Example obj;
   cout<< "\nOne int value";
   obj.func(90);
   cout<< "\nOne char value";
   obj.func('A');
   cout<< "\nTwo int values";
   obj.func(11, 2);
   return 0;
}