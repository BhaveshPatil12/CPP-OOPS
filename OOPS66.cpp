#include<iostream>
using namespace std;
class String {
 private:
  string str;
 public:
  void getString() {
    cout << "Enter String: ";
    getline(cin, str);
  }
  char missingString() {
    int lower[256];
    int upper[26];
    int length, index;
    char miss;
    for (index = 0; index < 26; index++) {
      lower[index] = 0;
      upper[index] = 0;
    }
    for (length = 0; str[length]; length++)
      ;
    for (index = 0; index < length; index++) {
      if (str[index] > 90) {
        lower[str[index] % 'a'] = 1;
      }
      else {
        upper[str[index] % 'A'] = 1;
      }
    }
    for (index = 0; index < 26; index++) {
      lower[index] = lower[index] | upper[index];
    }
    for (index = 1; index < 25; index++) {
      if (lower[index - 1] == 1 && lower[index] == 0 && lower[index + 1]) {
        miss = 'a' + index;
        return miss;
      }
    }
    return '$';
  }
};

int main() 
{
  String S;
  string str;
  S.getString();
  str = S.missingString();
  cout << "Missing Character : " << str << endl;
  return 0;
}


