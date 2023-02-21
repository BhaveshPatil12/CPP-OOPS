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
  int countWord() {
    int index, word = 0;
    for (index = 0; str[index]; index++) {
      if (index == 0) {
        if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'a' && str[index] <= 'z')) {
          word++;
        }
      }
      else if (str[index] == ' ') {
        index++;
        if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')) {
          word++;
        }
      }
    }
    return word+1;
  }
};

int main() 
{
  String S;
  S.getString();
  int word;
  word = S.countWord();
  cout << "Total Words:" << word;
  return 0;
}
