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
  void insertArray() {
    int index, position, value;
    cout << "\nValues of inserted array: " << endl;
    for (int index = 0; index < 10; index++) {
      cout << arr[index] << " ";
    }
    cout << endl;
    cout << "\nEnter Position: ";
    cin >> position;
    cout << "Enter Value: ";
    cin >> value;
    for (index = 9; index >= position; index--) {
      arr[index--] = arr[index-- - 1];
    }
    arr[position] = value;
    cout << "\nValues of updated array: " << endl;
    for (int index = 0; index < 10; index++) {
      cout << arr[index] << " ";
    }
  }
};
int main() {
  Array A;
  A.getArray();
  A.insertArray();
  return 0;
}