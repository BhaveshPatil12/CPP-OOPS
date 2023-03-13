#include<iostream>
using namespace std;
class Automorphic {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;
  }
  void isAutomorphic() {
    int index, check, square, number;
    cout << "\nAutomorphic Numbers in range " << start << " to " << end << " : "
         << endl;
    for (index = start; index <= end; index++) {
      number = index;
      square = number * number;
      check = 1;
      while (number) {
        if (number % 10 != square % 10) {
          check = 0;
        }
        number = number / 10;
        square = square / 10;
      }
      if (check) {
        cout << index << " ";
      }
    }
  }
};
int main() {
  Automorphic A;
  A.getRange();
  A.isAutomorphic();
  return 0;
}