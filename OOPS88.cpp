#include<iostream>
using namespace std;
class Array {
 private:
  int arr1[10];
  int arr2[10];
 public:
  void getArray() {
    cout << "Input 1st Array :" << endl;

    for (int index = 0; index < 10; index++) {
      cout << "[" << index << "]: ";
      cin >> arr1[index];
    }

    cout << "\nInput 2nd Array :" << endl;

    for (int index = 0; index < 10; index++) {
      cout << "[" << index << "]:";
      cin >> arr2[index];
    }
  }
  void productArray() {
    int temp[10], index;
    for (index = 0; index < 10; index++) {
      temp[index] = arr1[index] * arr2[index];
    }
    cout << "\nProducted Array:" << endl;
    for (index = 0; index < 10; index++) {
      cout << temp[index] << " ";
    }
  }
};

int main() 
{
  Array A;
  A.getArray();
  A.productArray();
  return 0;
}
