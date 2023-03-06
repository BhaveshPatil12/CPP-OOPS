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
  void sumEvenOdd() {
    int index, sumeven = 0, sumodd = 0;
    for (index = 0; index < 10; index++) {
      if (arr[index] % 2 == 0) {
        sumeven = sumeven + arr[index];
      }
      else {
        sumodd = sumodd + arr[index];
      }
    }

    cout << "\nSum of all even number : " << sumeven << endl;
    cout << "Sum of all odd number : " << sumodd << endl;
  }
};

int main() 
{
  Array A;
  A.getArray();
  A.sumEvenOdd();
  return 0;
}
