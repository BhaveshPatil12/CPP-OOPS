#include<iostream>
using namespace std;
class ArithmeticProgression {
 private:
  int array[10];
 public:
  void getProgression() {
    cout << "Enter Progression:" << endl;
    for (int index = 0; index < 10; index++) {
      cout << index << ":";
      cin >> array[index];
    }
  }
  void putProgression() {
    cout << "\nEntered Progression:";
    for (int index = 0; index < 10; index++) {
      cout << array[index] << ",";
    }
    cout << "\b \b";
  }
  void checkProgression() {
    int index, difference = 0;
    bool condition = true;
    difference = array[1] - array[0];
    for (index = 0; index < 9 && condition; index++) {
      condition = false;
      if (array[index] + difference == array[index + 1]) {
        condition = true;
      }
    }
    if (condition) {
      cout << "\n" << endl;
      cout << "It is an arithmetic progression" << endl;
    }
    else {
      cout << "\n" << endl;
      cout << "It is not an arithmetic progression" << endl;
    }
  }
};

int main() 
{
  ArithmeticProgression A;
  A.getProgression();
  A.putProgression();
  A.checkProgression();
  return 0;
}
