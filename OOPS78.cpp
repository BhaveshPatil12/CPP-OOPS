#include<iostream>
using namespace std;
class Array {
 private:
  int arr[10];
 public:
  void getArray() {
    for (int index = 0; index < 10; index++) {
      cout << "[" << index << "]:";
      cin >> arr[index];
    }
  }
  void differenceArray() {
    int index_1, index_2;
    for (index_1 = 0, index_2 = 9; index_1 <= 9 / 2; index_1++, index_2--) {
      cout << "Difference of index " << index_1 << " and " << index_2 << " is "
           << arr[index_1] - arr[index_2] << endl;
    }
  }
};

int main() 
{
  Array A;
  A.getArray();
  cout << "\n";
  A.differenceArray();
  return 0;
}