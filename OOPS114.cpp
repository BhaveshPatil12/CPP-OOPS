#include<iostream>
#include<math.h>
using namespace std;
class Disarium {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;
  }
  void isDisarium() {
    int index, remain, sum, length, temp;
    cout << "\nDisarium Numbers in range " << start << " to " << end << " : "
         << endl;
    for (index = start; index <= end; index++) {
      length = 0;
      sum = 0;
      temp = index;
      while (temp) {
        length++;
        temp = temp / 10;
      }
      temp = index;
      while (temp) {
        remain = temp % 10;
        sum = sum + pow(remain, length);
        temp = temp / 10;
        length--;
      }
      if (sum == index) {
        cout << index << " ";
      }
    }
  }
};
int main() {
  Disarium D;
  D.getRange();
  D.isDisarium();
  return 0;
}