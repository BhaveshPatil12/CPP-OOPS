#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0; 
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circle;
    Square square;

    shapePtr = &circle;
    shapePtr->draw();

    shapePtr = &square;
    shapePtr->draw();
    return 0;
}