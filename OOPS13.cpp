#include<iostream>
#include<math.h>
using namespace std;
class HexaToDecimal {
  private:
    char hexa[20];
  public:
    void getHexa() {
      cout << "Enter HexaDecimal:";
      cin >> hexa;
    }
  int HToD() {
    int index, length, base = 1, decimal = 0;
    for (length = 0; hexa[length]; length++);
    for (index = length - 1; index >= 0; index--) {
      if (hexa[index] >= '0' && hexa[index] <= '9') {
        decimal = decimal + (hexa[index] - 48) * base;
        base = base * 16;
      }
      else if (hexa[index] >= 'A' && hexa[index] <= 'F') {
        decimal = decimal + (hexa[index] - 55) * base;
        base = base * 16;
      }
    }
    return decimal;
  }
};

int main() 
{
  HexaToDecimal H; 
  int decimal;
  H.getHexa();
  decimal = H.HToD();
  cout << "Decimal Number: " << decimal;
  return 0;
}
