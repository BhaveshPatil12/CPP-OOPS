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
  void evenOdd() {
    cout << "\nSeparated Numbers : " << endl;
    cout << "\nEven \tOdd" << endl;
    for (int index = 0; index < 10; index++) {
      if (arr[index] % 2 == 0) {
        cout << arr[index] << endl;
      }
      else {
        cout << "\t" << arr[index] << endl;
      }
    }
  }
};

int main() 
{
  Array A;
  A.getArray();
  A.evenOdd();
  return 0;
}
