#include<iostream>
#include<math.h>
using namespace std;
class Kaprekar {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;
  }
  void isKaprekar() {
    int check = 0, index, parts, square, squaredigits = 0, digits, sum;
    cout << "\nKaprekar Numbers in range " << start << " to " << end << " : "
         << endl;
    for (index = start; index <= end; index++) {
      check = 0;
      if (index == 1) {
        check = 1;
      }
      square = index * index;
      while (square) {
        squaredigits++;
        square /= 10;
      }
      square = index * index;
      for (digits = 1; digits < squaredigits; digits++) {
        parts = pow(10, digits);
        if (parts == index) {
          continue;
        }
        sum = square / parts + square % parts;
        if (sum == index) {
          check = 1;
        }
      }
      if (check) {
        cout << index << " ";
      }
    }
  }
};
int main() {
  Kaprekar K;
  K.getRange();
  K.isKaprekar();
  return 0;
}