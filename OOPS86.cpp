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
      cout << "[" << index << "]:";
      cin >> arr1[index];
    }

    cout << "\nInput 2nd Array :" << endl;

    for (int index = 0; index < 10; index++) {
      cout << "[" << index << "]: ";
      cin >> arr2[index];
    }
  }
  void mergeArray() {
    int temp[20], index;
    for (index = 0; index < 20; index++) {
      if (index < 10) {
        temp[index] = arr1[index];
      }
      else {
        temp[index] = arr2[index - 10];
      }
    }
    cout << "\nMerged Array: " << endl;
    for (index = 0; index < 20; index++) {
      cout << temp[index] << " ";
    }
  }
};

int main() 
{
  Array A;
  A.getArray();
  A.mergeArray();
  return 0;
}
