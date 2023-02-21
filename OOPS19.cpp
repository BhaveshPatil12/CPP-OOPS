#include<iostream>
using namespace std;
class String {
  private:
    char str[30];
  public:
    void getString() {
      cout << "Enter String:";
      cin.getline(str, 30);
    }
  string titleCase() {
    char temp[30];
    int index;
    for (index = 0; str[index]; index++) {
      if (index == 0) {
        if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')) {
          if ((str[index] >= 'a' && str[index] <= 'z')) {
            temp[index] = str[index] - 32;
          }
          else {
            temp[index] = str[index];
          }
        }
        else {
          temp[index] = str[index];
        }
      }
      else if (str[index] == ' ') {
        temp[index] = str[index];
        index++;
        if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')) {
          if ((str[index] >= 'a' && str[index] <= 'z')) {
            temp[index] = str[index] - 32;
          }
          else {
            temp[index] = str[index];
          }
        }
        else {
          temp[index] = str[index];
        }
      }
      else if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')) {
        if ((str[index] >= 'A' && str[index] <= 'Z')) {
          temp[index] = str[index] + 32;
        }
        else {
          temp[index] = str[index];
        }
      }
      else {
        temp[index] = str[index];
      }
    }
    temp[index] = 0;
    return temp;
  }
};

int main() 
{
  String S;
  S.getString();
  string str;
  str = S.titleCase();
  cout << "Title cased String:" << str;
  return 0;
}
