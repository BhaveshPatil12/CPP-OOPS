#include<iostream>
#include<math.h>
using namespace std;
class Disarium {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isDisarium() {
    int remain, sum = 0, length = 0, temp = number;
    while (temp) {
      length++;
      temp = temp / 10;
    }
    temp = number;
    while (temp) {
      remain = temp % 10;
      sum = sum + pow(remain, length);
      temp = temp / 10;
      length--;
    }
    if (sum == number) {
      cout << "It is a Disarium Number!" << endl;
    } else {
      cout << "It is not a Disarium Number!" << endl;
    }
  }
};
int main() {
  Disarium D;
  D.getNumber();
  D.isDisarium();
  return 0;
}