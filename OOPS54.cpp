#include<iostream>
#include<math.h>
using namespace std;
class AreaTriangle {
 private:
  float side_1, side_2, side_3;
 public:
  void getSides() {
    cout << "Enter 1st Side: ";
    cin >> side_1;

    cout << "Enter 2nd Side: ";
    cin >> side_2;

    cout << "Enter 3rd Side: ";
    cin >> side_3;
  }
  double areaHerons() {
    float area, temp;
    temp = (side_1 + side_2 + side_3) / 2;
    area = sqrt(temp * (temp - side_1) * (temp - side_2) * (temp - side_3));
    return area;
  }
};

int main() 
{
  AreaTriangle A;
  float area;
  A.getSides();
  area = A.areaHerons();
  cout << "Area : " << area;
  return 0;
}
