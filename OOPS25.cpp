#include<iostream>
using namespace std;
class SumDigit {
 private:
  int start, end;
 public:
  void getNumbers() {
    cout << "Enter Numbers:";
    cin >> start >> end;
  }
  int sumDigit() {
    int index, temp, sum = 0;
    for (index = start; index <= end; index++) {
      temp = index;
      while (temp > 0) {
        sum = sum + temp % 10;
        temp = temp / 10;
      }
    }
    return sum;
  }
};

int main() 
{
  SumDigit S;
  int sum;
  S.getNumbers();
  sum = S.sumDigit();
  cout << "Sum of Digits : " << sum;
  return 0;
}
