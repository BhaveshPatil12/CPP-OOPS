#include<iostream>
using namespace std;
class IsPrime {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number : ";
    cin >> number;
  }
  void isprime() {
    int index, check = 0;
    for (index = 2; index < number; index++) {
      if (number % index == 0) {
        cout << number << " is not Prime." << endl;
        check++;
        break;
      }
    }
    if (check == 0) {
      cout << number << " is Prime." << endl;
    }
  }
};

int main() 
{
  IsPrime P;
  P.getNumber();
  P.isprime();
  return 0;
}
