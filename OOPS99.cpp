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
  void deleteArray() {
    int index, position;
    cout << "\nValues of inserted array: " << endl;
    for (int index = 0; index < 10; index++) {
      cout << arr[index] << " ";
    }
    cout << endl;
    cout << "\nEnter the position of elements to be deleted: ";
    cin >> position;
    for (index = position; index < 10 - 1; index++) {
      arr[index] = arr[index + 1];
    }
    cout << "\nValues of updated array: " << endl;
    for (int index = 0; index < 10 - 1; index++) {
      cout << arr[index] << " ";
    }
  }
};
int main() {
  Array A;
  A.getArray();
  A.deleteArray();
  return 0;
}