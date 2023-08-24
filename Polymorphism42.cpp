#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }

    virtual ~Shape() {
        std::cout << "Shape destructor." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }

    ~Circle() override {
        std::cout << "Circle destructor." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }

    ~Square() override {
        std::cout << "Square destructor." << std::endl;
    }
};

int main() {
    Shape* shapePtr = new Circle;
    shapePtr->draw();
    delete shapePtr;

    shapePtr = new Square;
    shapePtr->draw();
    delete shapePtr;

    return 0;
}