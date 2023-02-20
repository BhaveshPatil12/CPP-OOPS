#include<iostream>
using namespace std;
class DecimalToHexa {
  private:
    int decimal;
  public:
    void getDecimal() {
      cout << "Enter Decimal Number:";
      cin >> decimal;
    }
  string DToH() {
    char hexa[20];
    char temp[20];
    int index_1 = 0, index_2, index_3;
    while (decimal) {
      int remain = 0;
      remain = decimal % 16;
      if (remain < 10) {
        temp[index_1] = remain + 48;
        index_1++;
      }
      else {
        temp[index_1] = remain + 55;
        index_1++;
      }
      decimal = decimal / 16;
    }
    for (index_2 = index_1 - 1, index_3 = 0; index_2 >= 0; index_2--, index_3++) {
      hexa[index_3] = temp[index_2];
    }
    hexa[index_3] = 0;
    return hexa;
  }
};

int main() 
{
  DecimalToHexa D;
  string hexa;
  D.getDecimal();
  hexa = D.DToH();
  cout << "HexaDecimal : " << hexa;
  return 0;
}
