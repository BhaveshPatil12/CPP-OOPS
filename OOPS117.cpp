#include<iostream>
using namespace std;
class Automorphic {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isAutomorphic() {
    int check = 1, square = number * number;
    while (number) {
      if (number % 10 != square % 10) {
        check = 0;
      }
      number = number / 10;
      square = square / 10;
    }
    if (check) {
      cout << "It is an Automorphic Number!" << endl;
    } else {
      cout << "It is not an Automorphic Number!" << endl;
    }
  }
};
int main() {
  Automorphic A;
  A.getNumber();
  A.isAutomorphic();
  return 0;
}