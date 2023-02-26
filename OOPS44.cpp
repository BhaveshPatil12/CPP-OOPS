#include<iostream>
using namespace std;
class Triangle {
 private:
  int angle_1, angle_2;
 public:
  void putAngles() {
    cout << "Enter 1st Angle: ";
    cin >> angle_1;
    cout << "Enter 2nd Angle: ";
    cin >> angle_2;
  }
  int getAngle() {
    int angle;
    angle = 180 - (angle_1 + angle_2);
    return angle;
  }
};

int main() 
{
  Triangle T;
  int angle;
  T.putAngles();
  angle = T.getAngle();
  cout << "Third Angle:" << angle << endl;
  return 0;
}
