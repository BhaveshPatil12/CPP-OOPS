#include<iostream>
using namespace std;
class OctalToHexa {
  private:
    int octal;
  public:
    void getOctal() {
      cout << "Enter Octal Number:";
      cin >> octal;
    }
  string OToH() {
    int decimal = 0, remain;
    int base = 1;
    int temp = octal;
    while (temp) {
      remain = temp % 10;
      temp = temp / 10;
      decimal = decimal + remain * base;
      base = base * 8;
    }
    char hexa[100];
    int index_1 = 0;
    while (decimal != 0) {
      int temp = 0;
      temp = decimal % 16;
      if (temp < 10) {
        hexa[index_1] = temp + 48;
        index_1++;
      }
      else {
        hexa[index_1] = temp + 87;
        index_1++;
      }
      decimal = decimal / 16;
    } 
    string hexadecimal = "";
    for (int index_2 = index_1 - 1; index_2 >= 0; index_2--) {
      hexadecimal = hexadecimal + hexa[index_2];
    }
    return hexadecimal;
  }
};

int main() 
{
  OctalToHexa O;
  string hex;
  O.getOctal();
  hex = O.OToH();
  cout << "Hexadecimal:" << hex;
  return 0;
}
