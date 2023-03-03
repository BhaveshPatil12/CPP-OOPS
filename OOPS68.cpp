#include<iostream>
using namespace std;
class Division {
 private:
  int Dividend, Divisor;
 public:
  void getValues() {
    cout << "Enter Dividend : ";
    cin >> Dividend;

    cout << "Enter Divisor : ";
    cin >> Divisor;
  }
  void division() {
    float Quotient, Remainder;
    Quotient = Dividend / Divisor;
    Remainder = Dividend % Divisor;
    cout << "Quotient of " << Dividend << " / " << Divisor << " is " << Quotient
         << endl;
    cout << "Remainder of " << Dividend << " % " << Divisor << " is "
         << Remainder << endl;
  }
};

int main() 
{
  Division D;
  D.getValues();
  D.division();
  return 0;
}
