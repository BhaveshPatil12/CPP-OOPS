#include<iostream>
using namespace std;
class Deficient {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isDeficient() {
    int index, sum = 0;
    for (index = 1; index <= number; index++) {
      if (number % index == 0) {
        sum = sum + index;
      }
    }
    if (sum < (2 * number)) {
      cout << "It is a Deficient Number";
    } else {
      cout << "It is not a Deficient Number";
    }
  }
};
int main() {
  Deficient D;
  D.getNumber();
  D.isDeficient();
  return 0;
}