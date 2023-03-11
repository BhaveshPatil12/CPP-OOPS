#include<iostream>
#include<math.h>
using namespace std;
class Narcissistic {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;
  }
  void isNarcissistic() {
    int index, temp, remain, power, sum;
    cout << "\nNarcissistic Numbers in range " << start << " to " << end
         << " : " << endl;
    for (index = start; index <= end; index++) {
      power = 0;
      sum = 0;
      temp = index;
      while (temp) {
        power++;
        temp = temp / 10;
      }
      temp = index;
      while (temp) {
        remain = temp % 10;
        sum = sum + pow(remain, power);
        temp = temp / 10;
      }
      if (sum == index) {
        cout << index << " ";
      }
    }
  }
};
int main() {
  Narcissistic N;
  N.getRange();
  N.isNarcissistic();
  return 0;
}