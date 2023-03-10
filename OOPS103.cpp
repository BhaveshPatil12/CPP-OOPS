#include<iostream>
using namespace std;
class Abundant {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isAbundant() {
    int index, sum = 0;
    for (index = 1; index < number; index++) {
      if (number % index == 0) {
        sum = sum + index;
      }
    }
    if (sum > number) {
      cout << "It is an Abundant Number";
    } else {
      cout << "It is not an Abundant Number";
    }
  }
};
int main() {
  Abundant A;
  A.getNumber();
  A.isAbundant();
  return 0;
}