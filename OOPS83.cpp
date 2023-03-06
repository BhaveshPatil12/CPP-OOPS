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
  void productEvenOdd() {
    int index, producteven = 1, productodd = 1;
    for (index = 0; index < 10; index++) {
      if (arr[index] % 2 == 0) {
        producteven = producteven * arr[index];
      }
      else {
        productodd = productodd * arr[index];
      }
    }

    cout << "\nProduct of all even number : " << producteven << endl;
    cout << "Product of all odd number : " << productodd << endl;
  }
};

int main() 
{
  Array A;
  A.getArray();
  A.productEvenOdd();
  return 0;
}
