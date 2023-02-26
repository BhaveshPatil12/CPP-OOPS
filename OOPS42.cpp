#include<iostream>
using namespace std;
class SimpleInterest {
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
  void getSimpleInterest() {
    float interest, amount;
    interest = (principle * rate * time_period) / 100;
    amount = interest + principle;
    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount: " << amount << endl;
  }
};

int main() 
{
  SimpleInterest S;
  S.putValues();
  S.getSimpleInterest();
  return 0;
}
