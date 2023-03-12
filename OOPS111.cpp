#include<iostream>
using namespace std;
class Happy {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isHappy() {
    int sum, remain;
    while (sum != 1 && sum != 4) {
      sum = 0;
      while (number) {
        remain = number % 10;
        sum = sum + (remain * remain);
        number = number / 10;
      }
      number = sum;
    }
    if (sum == 1) {
      cout << "It is a Happy Number!" << endl;
    } else if (sum == 4) {
      cout << "It is not a Happy Number!" << endl;
    }
  }
};
int main() {
  Happy H;
  H.getNumber();
  H.isHappy();
  return 0;
}