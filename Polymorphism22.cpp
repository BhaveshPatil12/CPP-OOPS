#include<iostream>
using namespace std;
class Areas{
    public:
    int area(int side){
        return side*side;
    }
    int area(int length, int breadth){
        return length*breadth;
    }
    float area(float r){
        return 3.14*r*r;
    }
};
int main(){
    Areas square;
    cout<<"The area of a square of side 5 is: "
        <<square.area(5)<<endl;
    Areas rectangle;
    cout<<"The area of a rectangle of length 6 and breadth 8 is: "
        <<rectangle.area(6,8)<<endl;
    Areas circle;
    float radius = 7.0;
    cout<<"The area of a circle of side 7 is: "
        <<circle.area(radius)<<endl;
    return 0;
} 