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
  int add() {
    int sum = 0;
    for (int index = 0; index <= 4; index++) {
      sum = sum + array[index];
    }
    return sum;
  }
};

int main() 
{
  Array A;
  int sum;
  A.putArray();
  sum = A.add();
  cout << "Sum of all elements of the array is " << sum;
  return 0;
}
