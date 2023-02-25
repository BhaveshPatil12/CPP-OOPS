#include<iostream>
#include<math.h>
using namespace std;
class Polygon {
 private:
  float sides, length, area;
 public:
  void putSides() {
    cout << "Enter Sides: ";
    cin >> sides;
    cout << "Enter Length of sides: ";
    cin >> length;
  }
  double getArea() {
    area = (sides * (length * length)) / (4.0 * tan((M_PI / sides)));
    return area;
  }
};

int main() 
{
  Polygon P;
  float area;
  P.putSides();
  area = P.getArea();
  cout << "Area of polygon is " << area << endl;
  return 0;
}
