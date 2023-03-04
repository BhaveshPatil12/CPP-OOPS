#include<iostream>
using namespace std;
class LCM {
 private:
  int number_1, number_2;
 public:
  void getNumbers() {
    cout << "Enter 1st Number : ";
    cin >> number_1;

    cout << "Enter 2nd Number : ";
    cin >> number_2;
  }
  void lcm() {
    int lcm;
    lcm = (number_1 > number_2) ? number_1 : number_2;
    do {
      if ((lcm % number_1 == 0) && (lcm % number_2 == 0)) {
        cout << "LCM of " << number_1 << " and " << number_2 << " is " << lcm;
        break;
      }
      else {
        lcm++;
      }
    } while (true);
  }
};

int main() 
{
  LCM L;
  L.getNumbers();
  L.lcm();
  return 0;
}
