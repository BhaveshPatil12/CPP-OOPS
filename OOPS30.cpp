#include<iostream>
#include<string>
using namespace std;
class Leap {
 private:
  int start_year, end_year;
 public:
  void getTimePeriod() {
    cout << "Enter Time Period : ";
    cin >> start_year >> end_year;
  }
  void isLeap() {
    int index, check = 1;
    cout << "Leap Years between " << start_year << " and " << end_year
         << " are " << endl;
    for (index = start_year; index <= end_year; index++) {
      if (index % 400 == 0) {
        cout << index << " ";
        check = 0;
      }
      else if (index % 100 == 0) {
      }
      else if (index % 4 == 0) {
        cout << index << " ";
        check = 0;
      }
      else {
      }
    }
    if (check != 0) {
      cout << "No Leap year found!" << endl;
    }
  }
};

int main() 
{
  Leap L;
  L.getTimePeriod();
  L.isLeap();
  return 0;
}
