#include<iostream>
using namespace std;
class Shape {
 protected:
  float perimeter;
};
class Rectangle : public Shape {
 private:
  float length, breadth;
 public:
  void get() {
    cout << "\nEnter Rectangle's Length :";
    cin >> length;
    cout << "Enter Rectangle's Breadth :";
    cin >> breadth;
  }
  double Perimeter() {
    perimeter = 2 * (length + breadth);
    return perimeter;
  }
};
class Circle : public Shape {
 private:
  float radius;
 public:
  void get() {
    cout << "Enter Circle's Radius :";
    cin >> radius;
  }
  double Perimeter() {
    perimeter = (2 * 22 * radius) / 7;
    return perimeter;
  }
};
class Square : public Shape {
 private:
  float side;
 public:
  void get() {
    cout << "\nEnter Square's Side :";
    cin >> side;
  }
  double Perimeter() {
    perimeter = 4 * side;
    return perimeter;
  }
};

int main() 
{
  Circle C;
  float circle;
  C.get();
  circle = C.Perimeter();
  cout << "Circumference of Circle : " << circle << endl;
  Rectangle R;
  float rectangle;
  R.get();
  rectangle = R.Perimeter();
  cout << "Perimeter of Rectangle : " << rectangle << endl;
  Square S;
  float square;
  S.get();
  square = S.Perimeter();
  cout << "Perimeter of Square : " << square << endl;
  return 0;
}
