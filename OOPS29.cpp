#include<iostream>
#include<string>
using namespace std;
class String {
 private:
  string str;
  string strrep;
  string strtorep;
 public:
  void getString() {
    cout << "Enter String : ";
    getline(cin, str);
  }
  void getSwap() {
    cout << "Enter String replace : ";
    cin >> strrep;

    cout << "Enter String to replace : ";
    cin >> strtorep;
  }
  string swapString() {
    int index_1, index_2;
    string temp_1;
    string temp_2;
    for (index_1 = 0; str[index_1]; index_1++) {
      temp_1 = str.substr(index_1, strrep.length()), temp_2;
      if (strrep == temp_1) {
        temp_2 = strtorep;
        for (index_2 = 0; index_2 < strrep.length(); index_2++) {
          str[index_1 + index_2] = temp_2[index_2];
        }
      }
    }
    str[index_1] = 0;
    return str;
  }
};

int main() 
{
  String S;
  string str;
  S.getString();
  S.getSwap();
  str = S.swapString();
  cout << "Edited String : " << str;
  return 0;
}
