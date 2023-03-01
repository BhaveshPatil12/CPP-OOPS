#include<iostream>
using namespace std;
class String {
 private:
  char str[30];
 public:
  void getString() {
    cout << "Enter String : ";
    cin.getline(str, 30);
  }
  string sortDescending() {
    int index_1, index_2, temp, length;
    for (length = 0; str[length]; length++);
    length--;
    for (index_1 = 0; str[index_1]; index_1++) {
      for (index_2 = 0; index_2 < length - index_1; index_2++) {
        if (str[index_2] > str[index_2 + 1]) {
          temp = str[index_2];
          str[index_2] = str[index_2 + 1];
          str[index_2 + 1] = temp;
        }
      }
    }
    return str;
  }
};

int main() 
{
  String S;
  string str;
  S.getString();
  str = S.sortDescending();
  cout << "Sorted String is " << str;
  return 0;
}
