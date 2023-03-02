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
  void isUppercase() {
    int index, check = 0;
    for (index = 0; str[index]; index++) {
      if ((str[index] >= 'A' && str[index] <= 'Z') ||
          (str[index] >= 'a' && str[index] <= 'z') || (str[index] == 32)) {
        if ((str[index] >= 'A' && str[index] <= 'Z') || (str[index] == 32)) {
          check++;
        } else {
          check = 0;
          break;
        }
      } else {
        check = 0;
        break;
      }
    }

    if (check != 0) {
      cout << "String is in uppercase!" << endl;
    } else {
      cout << "String is not in uppercase!" << endl;
    }
  }
};

int main() 
{
  String S;
  S.getString();
  S.isUppercase();
  return 0;
}
