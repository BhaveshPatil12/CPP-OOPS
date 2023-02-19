#include<iostream>
using namespace std;
class Array {
  private:
    int array[5];
  public:
    void putArray() {
      for (int index = 0; index <= 4; index++) {
        cout << "array[" << index << "]:";
        cin >> array[index];
      }
    }
  int product() {
    int product = 1;
    for (int index = 0; index <= 4; index++) {
      product = product * array[index];
    }
    return product;
  }
};

int main() 
{
  Array A;
  int product;
  A.putArray();
  product = A.product();
  cout << "Product of all elements of the array is " << product;
  return 0;
}
