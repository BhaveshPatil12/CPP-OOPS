#include<iostream>
#include<string>
using namespace std;
class Time {
 private:
  int minute;
 public:
  void getMinutes() {
    cout << "Enter Minutes:";
    cin >> minute;
  }
  void getTime() {
    bool condition;
    int hour = 0;
    do {
      condition = false;
      if (minute >= 60) {
        hour++;
        minute = minute - 60;
        condition = true;
      }
    } while (condition);
    cout << "Hour : Minute = " << hour << " : " << minute << endl;
  }
};

int main() 
{
  Time T;
  T.getMinutes();
  T.getTime();
  return 0;
}
