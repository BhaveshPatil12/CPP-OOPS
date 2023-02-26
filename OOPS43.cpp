#include<iostream>
#include<math.h>
using namespace std;
class CompoundInterest {
 private:
  float principle, rate, time_period;
 public:
  void putValues() {
    cout << "Enter Principle: ";
    cin >> principle;
    cout << "Enter Rate: ";
    cin >> rate;
    cout << "Enter Time: ";
    cin >> time_period;
  }
  void getCompoundInterest() {
    float compound_interest, amount;
    compound_interest =
        principle * pow((1 + rate / 100), time_period) - principle;
    amount = principle * pow((1 + rate / 100), time_period);
    cout << "Compound Interest: " << compound_interest << endl;
    cout << "Total Amount: " << amount << endl;
  }
};

int main() 
{
  CompoundInterest C;
  C.putValues();
  C.getCompoundInterest();
  return 0;
}
