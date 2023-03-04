#include<iostream>
using namespace std;
class InputNumStr {
 private:
  long number;
  char str[30];
 public:
  void getNumStr() {
    cout << "Enter String : ";
    cin.getline(str, 30);

    cout << "Enter Number : ";
    cin >> number;
  }
  void putNumStr() {
    cout << "String you entered : " << str << endl;
    cout << "Number you entered : " << number << endl;
  }
};

int main() 
{
  InputNumStr I;
  I.getNumStr();
  I.putNumStr();
  return 0;
}
