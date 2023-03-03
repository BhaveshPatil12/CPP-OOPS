#include<iostream>
using namespace std;
class DecimaltoBinary {
 private:
  int decimal;
 public:
  void getDecimal() {
    cout << "Enter Decimal Number : ";
    cin >> decimal;
  }
  void dtob() {
    int b[10], index;
    for (index = 0; decimal > 0; index++) {
      b[index] = decimal % 2;
      decimal = decimal / 2;
    }
    cout << "Binary is ";
    for (index = index - 1; index >= 0; index--) {
      cout << b[index];
    }
  }
};

int main() 
{
  DecimaltoBinary D;
  D.getDecimal();
  D.dtob();
  return 0;
}
