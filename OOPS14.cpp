#include<iostream>
#include<math.h>
using namespace std;
class HexaToOctal {
  private:
    char hexa[20];
  public:
    void getHexa() {
      cout << "Enter HexaDecimal:";
      cin >> hexa;
    }
  int HToO() {
    int index, length, decimal = 0, octal = 0;
    for (length = 0; hexa[length]; length++);
    for (index = 0; hexa[index]; index++, length--) {
      if (hexa[index] >= '0' && hexa[index] <= '9') {
        decimal = decimal + (hexa[index] - '0') * pow(16, length - 1);
      }
      if (hexa[index] >= 'A' && hexa[index] <= 'F') {
        decimal = decimal + (hexa[index] - 55) * pow(16, length - 1);
      }
      if (hexa[index] >= 'a' && hexa[index] <= 'f') {
        decimal = decimal + (hexa[index] - 87) * pow(16, length - 1);
      }
    } 
    index = 1;
    while (decimal != 0) {
      octal = octal + (decimal % 8) * index;
      decimal = decimal / 8;
      index = index * 10;
    }
    return octal;
  }
};

int main() 
{
  HexaToOctal H;
  int octal;
  H.getHexa(); 
  octal = H.HToO();
  cout << "Octal Number: " << octal;
  return 0;
}
