#include<iostream>
#include<conio.h>
using namespace std;
class CopyConstructor {
   int var, fact;
public:
   CopyConstructor(int temp) {
      var = temp;
   }
   int factorial_calculate() {
      fact = 1;
      for (int i = 1; i <= var; i++) {
         fact = fact * i;
      }
      return fact;
   }
};
int main()
{
   int n;
   cout << "\nEnter the Number : ";
   cin>>n;
   CopyConstructor obj(n);
   CopyConstructor cpy = obj;
   cout << "\n" << n << " Factorial is:" << obj.factorial_calculate();
   cout << "\n" << n << " Factorial is:" << cpy.factorial_calculate();
   return 0;
}