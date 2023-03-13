#include<iostream>
#include<math.h>
using namespace std;
class Pronic {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Start : ";
    cin >> start;
    cout << "Enter End : ";
    cin >> end;
  }
  void isPronic() {
    int index_1, index_2, check;
    cout << "\nPronic Numbers in range " << start << " to " << end << " : "
         << endl;
    for (index_1 = start; index_1 <= end; index_1++) {
      check = 0;
      for (index_2 = 0; index_2 <= (int)(sqrt(index_1)); index_2++) {
        if (index_1 == index_2 * (index_2 + 1)) {
          check = 1;
          break;
        }
      }
      if (check) {
        cout << index_1 << " ";
      }
    }
  }
};
int main() {
  Pronic P;
  P.getRange();
  P.isPronic();
  return 0;
}