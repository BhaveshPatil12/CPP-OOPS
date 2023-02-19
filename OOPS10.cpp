#include<iostream>
using namespace std;
class Perfect {
  private:
    int number;
  public:
    void getNumber() {
      cout << "Enter Number:";
      cin >> number;
    }
  void isPerfect() { 
    int index = 1, sum = 0;
    for (index = 1; index < number; index++) {
      if (number % index == 0) {
        sum = sum + index;
      }
    }
    if (number == sum){
      cout << number << " is a Perfect Number." << endl;
    }
    else{
      cout << number << " is not a Perfect Number." << endl;
    }
  }
};

int main() 
{
  Perfect P;
  P.getNumber();
  P.isPerfect();
  return 0;
}
