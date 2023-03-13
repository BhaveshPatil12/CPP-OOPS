#include<iostream>
using namespace std;
class RomanToInteger {
 private:
  string roman;
 public:
  void getRoman() {
    cout << "Enter Roman Number : ";
    cin >> roman;
  }
  void RToI() 
    int index, result = 0, length = int(roman.length());
    for (index = 0; index < length; index++) {
      switch (roman[index]) {
        case 'I':
          result = result + 1;
          break;
        case 'V':
          result = result + 5;
          break;
        case 'X':
          result = result + 10;
          break;
        case 'L':
          result = result + 50;
          break;
        case 'C':
          result = result + 100;
          break;
        case 'D':
          result = result + 500;
          break;
        case 'M':
          result = result + 1000;
          break;
      }
    }
    for (index = 1; index < length; index++) {
      if ((roman[index] == 'V' || roman[index] == 'X') &&
          roman[index - 1] == 'I') {
        result -= 1 + 1;
      }
      if ((roman[index] == 'L' || roman[index] == 'C') &&
          roman[index - 1] == 'X') {
        result -= 10 + 10;
      }
      if ((roman[index] == 'D' || roman[index] == 'M') &&
          roman[index - 1] == 'C') {
        result -= 100 + 100;
      }
    }
    cout << "Integer : " << result;
  }
};
int main() {
  RomanToInteger R;
  R.getRoman();
  R.RToI();
  return 0;
}