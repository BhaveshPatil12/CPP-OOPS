#include<iostream>
using namespace std;
class IsEven {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Range: ";
    cin >> start >> end;
  }
  void isEven() {
    int index_1;
    cout << "Even Numbers in the range " << start << " to "
         << end << " are " << endl;
    for (index_1 = start; index_1 <= end; index_1++) {
      if (index_1 % 2 == 0) {
        cout << index_1 << " ";
      }
    }
  }
};

int main() 
{
  IsEven E;
  E.getRange();
  E.isEven();
  return 0;
}
