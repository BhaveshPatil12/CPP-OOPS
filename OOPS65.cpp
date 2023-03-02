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
  void isAlphabet() {
    int index, check = 0;
    for (index = 0; str[index]; index++) {
      for (index = 0; str[index]; index++) {
        if ((str[index] >= 'A' && str[index] <= 'Z') ||
            (str[index] >= 'a' && str[index] <= 'z') || (str[index] == 32)) {
          check++;
        } else {
          check = 0;
          break;
        }
      }

      if (check != 0) {
        cout << "String contains only alphabets" << endl;
        break;
      } else {
        cout << "String does not contain only alphabets " << endl;
        break;
      }
    }
  }
};

int main() 
{
  String S;
  S.getString();
  S.isAlphabet();
  return 0;
}
