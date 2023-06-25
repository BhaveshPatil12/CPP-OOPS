#include<iostream>
using namespace std;
class Cube {
   double length;      
   double breadth;   
   double height;    
   public:
   double getVolume(void) {
      return length * breadth * height;
   }
   
   void setDimensions(double len, double h, double b) {
      length = len;
      breadth = b;
      height = h;
   }
   Cube operator+(const Cube& c) {
      Cube temp;
      
      temp.length = this->length + c.length;
      temp.breadth = this->breadth + c.breadth;
      temp.height = this->height + c.height;
      return temp;
   }
};
int main() {
    Cube cube1, cube2, cube3; 
    cube1.setDimensions(3.0, 3.0, 3.0); 
    cube2.setDimensions(5.0, 5.0, 5.0); 
    cout << "Volume of cube1 : " << cube1.getVolume() << endl;
    cout << "Volume of cube2 : " << cube2.getVolume() << endl;
    cout << "Volume of cube3 : " << cube3.getVolume() << endl;
    return 0;
} 