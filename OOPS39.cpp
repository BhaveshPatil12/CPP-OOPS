#include<iostream>
#include<math.h>
using namespace std;
class Binary {
 private:
  int binary_1, binary_2;
 public:
  void putBinary() {
    cout << "Enter 1st Binary: ";
    cin >> binary_1;
    cout << "Enter 2nd Binary: ";
    cin >> binary_2;
  }
  void sumBinary() {
    int index_1 = 0, index_2 = 0, sum[30];
    while (binary_1 != 0 || binary_2 != 0) {
      sum[index_1++] = (int)((binary_1 % 10 + binary_2 % 10 + index_2) % 2);
      index_2 = (int)((binary_1 % 10 + binary_2 % 10 + index_2) / 2);
      binary_1 = binary_1 / 10;
      binary_2 = binary_2 / 10;
    }
    if (index_2 != 0) {
      sum[index_1++] = index_2;
    }
    cout << "Sum of Binary is ";
    for (index_1 = index_1 - 1; index_1 >= 0; index_1--) {
      cout << sum[index_1];
    }
  }
};

int main() 
{
  Binary B;
  B.putBinary();
  B.sumBinary();
  return 0;
}
