#include<iostream>
using namespace std;
class Speed {
 private:
  float miles_per_h;
 public:
  void getSpeed() {
    cout << "Enter Speed in miles/h : ";
    cin >> miles_per_h;
  }
  double changeSpeed() {
    float km_per_h;
    km_per_h = (miles_per_h / 0.6213712);
    return km_per_h;
  }
};

int main() 
{
  Speed S;
  float speed;
  S.getSpeed();
  speed = S.changeSpeed();
  cout << "Speed in km/h : " << speed;
  return 0;
}
