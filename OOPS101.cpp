#include<iostream>
using namespace std;
class Ugly {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isUgly() {
    int check = 0;
    while (number != 1) {
      if (number % 5 == 0) {
        number = number / 5;
      }
      else if (number % 3 == 0) {
        number = number / 3;
      }
      else if (number % 2 == 0) {
        number = number / 2;
      }
      else {
        cout << "It is not an ugly number." << endl;
        check = 1;
        break;
      }
    }
    if (check == 0) {
      cout << "It is an ugly number." << endl;
    }
  }
};
int main() {
  Ugly U;
  U.getNumber();
  U.isUgly();
  return 0;
}