#include<iostream>
using namespace std;
class GCD {
 private:
  int number_1, number_2;
 public:
  void getNumbers() {
    cout << "Enter 1st Number: ";
    cin >> number_1;
    cout << "Enter 2nd Number: ";
    cin >> number_2;
  }
  void gcd() {
    int gcd;
    gcd = (number_1 < number_2) ? number_1 : number_2;
    while (gcd > 0) {
      if ((number_1 % gcd == 0) && (number_2 % gcd == 0)) {
        break;
      }
      gcd--;
    }
    cout << "GCD of " << number_1 << " and " << number_2 << " is " << gcd
         << endl;
  }
};

int main() 
{
  GCD G;
  G.getNumbers();
  G.gcd();
  return 0;
}
