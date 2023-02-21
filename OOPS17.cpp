#include<iostream>
using namespace std;
class Array {
  private:
    int array[5];
  public:
    void getArray() {
      for (int index = 0; index <= 4; index++) {
        cout << "array[" << index << "]:";
        cin >> array[index];
      }
    }
  int secondSmallest() {
    int index_1, index_2, temp, second;
    for (index_1 = 0; index_1 <= 4; index_1++) {
      for (index_2 = 0; index_2 < 4 - index_1; index_2++) {
        if (array[index_2] > array[index_2 + 1]) {
          temp = array[index_2];
          array[index_2] = array[index_2 + 1];
          array[index_2 + 1] = temp;
        }
      }
    }
    second = array[0];
    for (int index = 0; index <= 4; index++) {
      if (second < array[index]) {
        second = array[index];
        break;
      }
    }
    return second;
  }
};

int main() 
{
  Array A;
  A.getArray(); 
  int second;
  second = A.secondSmallest();
  cout << "Second Smallest Number in array is  " << second;
  return 0;
}
