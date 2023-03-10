#include<iostream>
using namespace std;
class Ugly {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;
  }
  void isUgly() {
    int index, check, temp;
    cout << "\nUgly Numbers in range " << start << " to " << end << " : "
         << endl;
    for (index = start; index <= end; index++) {
      temp = index;
      while (temp != 1) {
        check = 1;
        if (temp % 5 == 0) {
          temp = temp / 5;
        }
        else if (temp % 3 == 0) {
          temp = temp / 3;
        }
        else if (temp % 2 == 0) {
          temp = temp / 2;
        }
        else {
          check = 0;
          break;
        }
      }
      if (check == 1) {
        cout << index << " ";
      }
    }
  }
};
int main() {
  Ugly U;
  U.getRange();
  U.isUgly();
  return 0;
}