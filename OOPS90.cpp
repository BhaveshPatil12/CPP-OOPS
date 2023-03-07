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
      cout << "[" << index << "]: ";
      cin >> arr2[index];
    }
  }
  void productArray() {
    int product[10], index;
    for (index = 0; index < 10; index++) {
      product[index] = arr1[index] * arr2[9 - index];
    }
    cout << "\nReversely producted array :" << endl;
    for (index = 0; index < 10; index++) {
      cout << product[index] << " ";
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
