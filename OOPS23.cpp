#include<iostream>
using namespace std;
class Array {
  private:
    int array[5];
  public:
    void getArray() {
      for (int index = 0; index <= 4; index++) {
        cout << "array[" << index << "]: ";
        cin >> array[index];
      }
    }
  double median() {
    int index_1, index_2, temp, med;
    float sum = 0;
    for (index_1 = 0; index_1 <= 4; index_1++) {
      for (index_2 = 0; index_2 < 4 - index_1; index_2++) {
        if (array[index_2] > array[index_2 + 1]) {
          temp = array[index_2];
          array[index_2] = array[index_2 + 1];
          array[index_2 + 1] = temp;
        }
      }
    }
    if (index_1 % 2 != 0) {
      med = index_1 / 2;
      return array[med];
    }
    else {
      med = index_1 / 2;
      sum = array[med] + array[med - 1];
      sum = sum / 2;
      return sum;
    }
  }
};

int main() 
{
  Array A;
  float med;
  A.getArray();
  med = A.median();
  cout << "Median of Array is " << med;
  return 0;
}
