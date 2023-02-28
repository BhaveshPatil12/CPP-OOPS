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
  char largest() {
    char max = str[0];
    for (int index = 1; str[index]; index++) {
      if (str[index] > max) {
        max = str[index];
      }
    }
    return max;
  }
};

int main() 
{
  String S;
  char max;
  S.putString();
  max = S.largest();
  cout << "Largest Alphabet is " << max;
  return 0;
}
