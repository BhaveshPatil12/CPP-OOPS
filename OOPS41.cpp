#include<iostream>
#include<math.h>
using namespace std;
class Hexagon {
 private:
  float length, area;
 public:
  void putSides() {
    cout << "Enter Length of sides: ";
    cin >> length;
  }
  double getArea() {
    area = (6 * (length * length)) / (4.0 * tan((M_PI / 6)));
    return area;
  }
};

int main() 
{
  Hexagon H;
  float area;
  H.putSides();
  area = H.getArea();
  cout << "Area of Hexagon is " << area << endl;
  return 0;
}
