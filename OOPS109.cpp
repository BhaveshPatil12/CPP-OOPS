#include<iostream>
#include<math.h>
using namespace std;
class Narcissistic {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isNarcissistic() {
    int temp = number, remain, power = 0, sum = 0;
    while (temp) {
      power++;
      temp = temp / 10;
    }
    temp = number;
    while (temp) {
      remain = temp % 10;
      sum = sum + pow(remain, power);
      temp = temp / 10;
    }
    if (sum == number) {
      cout << "It is a Narcissistic Number!" << endl;
    } else {
      cout << "It is not a Narcissistic Number!" << endl;
    }
  }
};
int main() {
  Narcissistic N;
  N.getNumber();
  N.isNarcissistic();
  return 0;
}