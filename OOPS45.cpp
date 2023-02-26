#include<iostream>
using namespace std;
class Speed {
 private:
  float km_per_h;
 public:
  void getSpeed() {
    cout << "Enter Speed in km/h : ";
    cin >> km_per_h;
  }
  double changeSpeed() {
    float mile_per_h;
    mile_per_h = (km_per_h * 0.6213712);
    return mile_per_h;
  }
};

int main() 
{
  Speed S;
  float speed;
  S.getSpeed();
  speed = S.changeSpeed();
  cout << "Speed in miles/h : " << speed;
  return 0;
}
