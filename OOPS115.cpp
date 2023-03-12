#include<iostream>
#include<math.h>
using namespace std;
class Pronic {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isPronic() {
    int index, check = 0;
    for (index = 0; index <= (int)(sqrt(number)); index++) {
      if (number == index * (index + 1)) {
        check = 1;
        break;
      }
    }
    if (check) {
      cout << "It is a Pronic Number!" << endl;
    } else {
      cout << "It is not a Pronic Number!" << endl;
    }
  }
};
int main() {
  Pronic P;
  P.getNumber();
  P.isPronic();
  return 0;
}