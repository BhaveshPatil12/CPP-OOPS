#include<iostream>
using namespace std;
class String {
 private:
  char str[30];
 public:
  void putString() {
    cout << "Enter String : ";
    cin.getline(str, 30);
  }
  char smallest() {
    char min = str[0];
    for (int index = 1; str[index]; index++) {
      if (str[index] < min) {
        min = str[index];
      }
    }
    return min;
  }
};

int main() 
{
  String S;
  char min;
  S.putString();
  min = S.smallest();
  cout << "Smallest Alphabet is " << min;
  return 0;
}
