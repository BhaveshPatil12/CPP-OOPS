#include<iostream>
using namespace std;
class BinaryToDecimal {
 private:
  int binary;
 public:
  void getBinary() {
    cout << "Enter Binary digit : ";
    cin >> binary;
  }
  void btod() {
    int decimal = 0, digit, base = 1;
    while (binary) {
      digit = binary % 10;
      binary = binary / 10;
      decimal += digit * base;
      base = base * 2;
    }
    cout << "Decimal is " << decimal << endl;
  }
};

int main() 
{
  BinaryToDecimal B;
  B.getBinary();
  B.btod();
  return 0;
}
