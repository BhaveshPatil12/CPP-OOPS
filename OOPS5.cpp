#include<iostream>
using namespace std;
class IsPalindrome {
  private:
    int start, end;
  public:
    void getRange() {
      cout << "Enter Range:";
      cin >> start >> end;
    }
  void isPalindrome() {
    int index;
    cout << "Palindrome Numbers in the range " << start << " to " << end << " are " << endl;
    for (index = start; index <= end; index++) {
      int remain, result = 0;
      int number = index;
      while (number) {
        remain = number % 10;
        result = (result * 10) + remain;
        number = number / 10;
      }
      if (result == index) {
        cout << index << " ";
      }
    }
  }
};

int main() 
{
  IsPalindrome P;
  P.getRange();
  P.isPalindrome();
  return 0;
}
