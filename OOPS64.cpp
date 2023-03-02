#include<iostream>
using namespace std;
class String {
 private:
  char str[30];
 public:
  void getString() {
    cout << "Enter String: ";
    cin.getline(str, 30);
  }
  void isNumeric() {
    int index, check = 0;
    for (index = 0; str[index]; index++) {
      for (index = 0; str[index]; index++) {
        if (str[index] >= '0' && str[index] <= '9') {
          check++;
        } else {
          check = 0;
          break;
        }
      }

      if (check != 0) {
        cout << "String is in numeric!" << endl;
        break;
      } else {
        cout << "String is not in numeric!" << endl;
        break;
      }
    }
  }
};

int main() 
{
  String S;
  S.getString();
  S.isNumeric();
  return 0;
}
