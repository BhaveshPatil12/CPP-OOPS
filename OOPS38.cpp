#include<iostream>
#include<math.h>
using namespace std;
class SwapNumber {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  int swapNumber() {
    int last_digit, first_digit, digits, swapped;
    last_digit = number % 10;
    digits = (int)log10(number);
    first_digit = (int)(number / pow(10, digits));
    swapped = last_digit;
    swapped = swapped * (int)pow(10, digits);
    swapped = swapped + number % ((int)pow(10, digits));
    swapped = swapped - last_digit;
    swapped = swapped + first_digit;
    return swapped;
  }
};

int main() 
{
  SwapNumber S;
  int number;
  S.getNumber();
  number = S.swapNumber();
  cout << "Swapped Number : " << number << endl;
  return 0;
}
