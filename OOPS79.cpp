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
  int countNumber() {
    int index, number, count = 0;
    cout << "Enter Number: ";
    cin >> number;
    for (index = 0; index <= 9; index++) {
      if (number == arr[index]) {
        count++;
      }
    }
    return count;
  }
};

int main() 
{
  Array A;
  int count;
  A.getArray();
  count = A.countNumber();
  cout << "Occurrence of the number in array is " << count << endl;
  return 0;
}
