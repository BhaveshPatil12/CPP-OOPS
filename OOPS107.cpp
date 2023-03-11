#include<iostream>
#include<math.h>
using namespace std;
class Kaprekar {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isKaprekar() {
    int check = 0, parts, square, squaredigits = 0, digits, sum;
    if (number == 1) {
      check = 1;
    }
    square = number * number;
    while (square) {
      squaredigits++;
      square /= 10;
    }
    square = number * number;
    for (digits = 1; digits < squaredigits; digits++) {
      parts = pow(10, digits);
      if (parts == number) {
        continue;
      }
      sum = square / parts + square % parts;
      if (sum == number) {
        check = 1;
      }
    }
    if (check) {
      cout << "It is a Kaprekar Number!" << endl;
    } else {
      cout << "It is not a Kaprekar Number!" << endl;
    }
  }
};
int main() {
  Kaprekar K;
  K.getNumber();
  K.isKaprekar();
  return 0;
}