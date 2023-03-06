#include<iostream>
using namespace std;
class Array {
 private:
  int arr[10];
 public:
  void getArray() {
    for (int index = 0; index < 10; index++) {
      cout << "[" << index << "]: ";
      cin >> arr[index];
    }
  }
  void sortEvenOdd() {
    int temp[10], index_1, index_2 = 0;
    for (index_1 = 0; index_1 < 10; index_1++) {
      if (arr[index_1] % 2 == 0) {
        temp[index_2] = arr[index_1];
        index_2++;
      }
    }
    for (index_1 = 0; index_1 < 10; index_1++) {
      if (arr[index_1] % 2 != 0) {
        temp[index_2] = arr[index_1];
        index_2++;
      }
    }
    cout << "\nSorted Array:" << endl;
    for (index_1 = 0; index_1 < 10; index_1++) {
      cout << temp[index_1] << " ";
    }
  }
};

int main() 
{
  Array A;
  A.getArray();
  A.sortEvenOdd();
  return 0;
}
