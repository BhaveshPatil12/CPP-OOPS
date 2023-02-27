#include<iostream>
using namespace std;
class OddEven {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Range : ";
    cin >> start >> end;
  }
  void sumOddEven() {
    int index, sum_even = 0, sum_odd = 0;
    for (index = start; index <= end; index++) {
      if (index % 2 == 0) {
        sum_even = sum_even + index;
      }
      else {
        sum_odd = sum_odd + index;
      }
    }
    cout << "Sum of all even numbers is " << sum_even << "\n"
         << "Sum of all odd numbers is " << sum_odd << endl;
  }
};

int main() 
{
  OddEven O;
  O.getRange();
  O.sumOddEven();
  return 0;
}
