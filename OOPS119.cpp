#include<iostream>
using namespace std;
class IntegerToRoman {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void IToR() {
    string roman[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                      "XL", "X",  "IX", "V",  "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";
    for (int index = 0; index < 13; index++) {
      while (number - values[index] >= 0) {
        result = result + roman[index];
        number = number - values[index];
      }
    }
    cout << "Roman : " << result;
  }
};
int main() {
  IntegerToRoman I;
  I.getNumber();
  I.IToR();
  return 0;
}