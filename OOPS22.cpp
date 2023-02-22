#include<iostream>
using namespace std;
class Array {
  private:
    float array[5];
  public:
    void putArray() {
      for (int index = 0; index <= 4; index++) {
        cout << "array[" << index << "]: ";
        cin >> array[index];
      }
    }
  double mean() {
    float sum = 0, Mean;
    int index;
    for (index = 0; index <= 4; index++) {
      sum = sum + array[index];
    }
    Mean = sum / 5;
    return Mean;
  }
};

int main() 
{
  Array A;
  float Mean;
  A.putArray();
  Mean = A.mean();
  cout << "Mean of the array is " << Mean;
  return 0;
}
