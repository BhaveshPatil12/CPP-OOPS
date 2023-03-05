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
  void countNumber() {
    int max_count = 0, count = 0, index_1, index_2;

    cout << "\nMost occurred number: ";
    for (int index_1 = 0; index_1 < 10; index_1++) {
      count = 1;
      for (index_2 = index_1 + 1; index_2 < 10; index_2++) {
        if (arr[index_1] == arr[index_2]) {
          count++;
        }
      }
      if (count > max_count) {
        max_count = count;
      }
    }
    for (index_1 = 0; index_1 < 10; index_1++) {
      count = 1;
      for (index_2 = index_1 + 1; index_2 < 10; index_2++) {
        if (arr[index_1] == arr[index_2]) {
          count++;
        }
      }
      if (count == max_count) {
        cout << arr[index_1] << endl;
      }
    }
  }
};

int main() 
{
  Array A;
  A.getArray();
  A.countNumber();
  return 0;
}
