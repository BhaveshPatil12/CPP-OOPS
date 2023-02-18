#include<iostream>
using namespace std;
class IsOdd {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Range:";
    cin >> start >> end;
  }
  void isOdd() {
    int index;
    cout << "Odd Numbers in the range " << start << " to " << end << " are "
         << endl;
    for (index = start; index <= end; index++) {
      if (index % 2 != 0) {
        cout << index << " ";
      }
    }
  }
};

int main() 
{
  IsOdd O;
  O.getRange();
  O.isOdd();
  return 0;
}
