#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Time {
 private:
  string time_period;
 public:
  void getTime() {
    cout << "Enter Time Period (12:00AM-11:00PM): ";
    cin >> time_period;
  }
  int getMinutes() {
    string num_1, num_2, hour_1, hour_2, min_1, min_2;
    int index_1 = time_period.find('-'), index_2;
    bool condition = false;
    for (index_2 = 0; index_2 < time_period.length(); index_2++) {
      if (index_2 >= index_1) {
        condition = false;
        for (index_2; index_2 < time_period.length(); index_2++) {
          if (time_period[index_2] == ':') {
            condition = true;
            continue;
          }
          if (time_period[index_2] == 'A' || time_period[index_2] == 'P') {
            num_2.push_back(time_period[index_2]);
            num_2.push_back(time_period[index_2 + 1]);
          }
          if (condition && isdigit(time_period[index_2])) {
            min_2.push_back(time_period[index_2]);
          }
          else if (isdigit(time_period[index_2])) {
            hour_2.push_back(time_period[index_2]);
          }
        }
      }
      else {
        if (time_period[index_2] == ':') {
          condition = true;
          continue;
        }
        if (time_period[index_2] == 'A' || time_period[index_2] == 'P') {
          num_1.push_back(time_period[index_2]);
          num_1.push_back(time_period[index_2 + 1]);
        }
        if (condition && isdigit(time_period[index_2])) {
          min_1.push_back(time_period[index_2]);
        }
        else if (isdigit(time_period[index_2])) {
          hour_1.push_back(time_period[index_2]);
        }
      }
    }
    int hour = 0;
    if (stoi(hour_1) == stoi(hour_2) && num_1 == num_2 &&
        stoi(min_1) > stoi(min_2)) {
      hour = 24 - (stoi(hour_1) - stoi(hour_2));
    } 
    else if (stoi(hour_1) > stoi(hour_2) && num_1 == num_2 &&
             stoi(min_1) < stoi(min_2)) {
      hour = 24 - (stoi(hour_1) - stoi(hour_2));
    }
    else if (num_1 == num_2 || (hour_2 == "12" && hour_1 != "12")) {
      hour = stoi(hour_2) - stoi(hour_1);
    } else {
      hour = (12 - stoi(hour_1)) + stoi(hour_2);
    }
    int minutes;
    if (min_1 != "00") {
      minutes = (hour * 60 - stoi(min_1)) + stoi(min_2);
    } else {
      minutes = (hour * 60 + stoi(min_1)) + stoi(min_2);
    }
    return minutes;
  }
};

int main() 
{
  Time T;
  int minute;
  T.getTime();
  minute = T.getMinutes();
  cout << "Minutes : " << minute;
  return 0;
}