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
  void palindrome() {
    char temp_str[30];
    int index_1, index_2, end, check;
    for (end = 0; str[end]; end++);
    for (index_1 = end - 1, index_2 = 0; index_1 >= 0; index_1--, index_2++) {
      temp_str[index_2] = str[index_1];
    }
    temp_str[index_2] = 0;
    for (index_1 = 0; str[index_1]; index_1++) {
      if (str[index_1] == temp_str[index_1]) {
        check++;
      } else {
        check = 0;
        break;
      }
    }
    if (check != 0) {
      cout << "String is a palindrome!" << endl;
    } else {
      cout << "String is not a palindrome!" << endl;
    }
  }
};

int main() 
{
  String S;
  S.getString();
  S.palindrome();
  return 0;
}
