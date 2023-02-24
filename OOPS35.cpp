#include<iostream>
using namespace std;
class Array {
 private:
  int array[10];
 public:
  void getArray() {
    for (int index = 0; index <= 9; index++) {
      cout << "array[" << index << "]:";
      cin >> array[index];
    }
  }
  int differenceArray() {
    int index_1, index_2, temp, difference;
    for (index_1 = 0; index_1 <= 9; index_1++) {
      for (index_2 = 0; index_2 < 9 - index_1; index_2++) {
        if (array[index_2] > array[index_2 + 1]) {
          temp = array[index_2];
          array[index_2] = array[index_2 + 1];
          array[index_2 + 1] = temp;
        }
      }
    }
    difference = array[9] - array[0];
    cout << "Smallest Number: " << array[0] << " Largest Number: " << array[9]
         << endl;
    return difference;
  }
};

int main() 
{
  Array A;
  int difference;
  A.getArray();
  difference = A.differenceArray();
  cout << "Difference between largest and smallest number is " << difference;
  return 0;
}
