#include<iostream>
using namespace std;
class Happy {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;
  }
  void isHappy() {
    int index, sum, remain, number;
    cout << "\nHappy Numbers in range " << start << " to " << end << " : "
         << endl;
    for (index = start; index <= end; index++) {
      number = index;
      sum = 0;
      while (sum != 1 && sum != 4) {
        sum = 0;
        while (number) {
          remain = number % 10;
          sum = sum + (remain * remain);
          number = number / 10;
        }
        number = sum;
      }
      if (sum == 1) {
        cout << index << " ";
      }
    }
  }
};
int main() {
  Happy H;
  H.getRange();
  H.isHappy();
  return 0;
}