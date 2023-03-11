#include<iostream>
using namespace std;
class Deficient {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;
  }
  void isDeficient() {
    int index_1, index_2, sum = 0;
    cout << "\nDeficient Numbers in range " << start << " to " << end << " : "
         << endl;
    for (index_1 = start; index_1 <= end; index_1++) {
      sum = 0;
      for (index_2 = 1; index_2 <= index_1; index_2++) {
        if (index_1 % index_2 == 0) {
          sum = sum + index_2;
        }
      }
      if (sum < (2 * index_1)) {
        cout << index_1 << " ";
      }
    }
  }
};
int main() {
  Deficient D;
  D.getRange();
  D.isDeficient();
  return 0;
}