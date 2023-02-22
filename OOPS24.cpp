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
  int mode() {
    int index_1, index_2;
    int Mode = 0, count = 0;
    for (index_1 = 0; index_1 <= 9; index_1++) {
      count = 0;
      for (index_2 = 0; index_2 <= 9; index_2++) {
        if (array[index_1] == array[index_2]) {
          count++;
        }
      }
      if (count > 0) {
        Mode = array[index_1];
      }
    }
    return Mode;
  }
};

int main() 
{
  Array A;
  float mod;
  A.getArray();
  mod = A.mode();
  cout << "Mode of Array is " << mod;
  return 0;
}
