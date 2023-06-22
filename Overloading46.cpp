#include<iostream>
using namespace std;
class Cuboid {
    public:
        double length; 
    double breadth; 
    double height;
    public:
        double getVolume(void) {
            return length * breadth * height;
        }
    void setLength(double l) {
        length = l;
    }
    void setBreadth(double b) {
        breadth = b;
    }
    void setHeight(double h) {
        height = h;
    }
    Cuboid operator + (const Cuboid & c) {
        Cuboid cuboid;
        cuboid.length = this -> length + c.length;
        cuboid.breadth = this -> breadth + c.breadth;
        cuboid.height = this -> height + c.height;
        return cuboid;
    }
};

int main() {
    Cuboid c1;
    Cuboid c2;
    Cuboid c3;
    double volume = 0.0;
    c1.setLength(3.0);
    c1.setBreadth(4.0);
    c1.setHeight(5.0);
    c2.setLength(2.0);
    c2.setBreadth(5.0);
    c2.setHeight(8.0);
    cout << "Calling the getVolume() method to find the volume of Cuboid c1\n";
    volume = c1.getVolume();
    cout << "Volume of the Cuboid c1 is : " << volume << "\n\n\n";
    cout << "Calling the getVolume() method to find the volume of Cuboid c2\n";
    volume = c2.getVolume();
    cout << "Volume of the Cuboid c2 is : " << volume << "\n\n\n";
    c3 = c1 + c2;
    cout << "Length of the Cuboid c3 is : " << c3.length << endl;
    cout << "Breadth of the Cuboid c3 is : " << c3.breadth << endl;
    cout << "Height of the Cuboid c3 is : " << c3.height << endl;
    cout << "\n\nCalling the getVolume() method to find the volume of Cuboid c3\n";
    volume = c3.getVolume();
    cout << "Volume of the Cuboid c3 is : " << volume << endl;
    cout << "\n\n\n";
    return 0;
}