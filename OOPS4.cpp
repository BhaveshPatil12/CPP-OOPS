#include<iostream>
using namespace std;
class IsArmstrong {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Range: ";
    cin >> start >> end;
}
  void isArmstrong() {
    int index;
    cout << "Armstrong Numbers in the range " << start
         << " to " << end << " are " << endl;
    for (index = start; index <= end; index++) {
      int remain, result = 0;
      int number = index;
      while (number) {
        remain = number % 10;
        result = result + (remain * remain * remain);
        number = number / 10;
      }
      if (result == index) {
        cout << index << " ";
      }
    }
  }
};

int main()
{
  IsArmstrong A;
  A.getRange();
  A.isArmstrong();
  return 0;
}
