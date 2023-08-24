#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
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

void drawShape(Shape* shape) {
    shape->draw();
}

int main() {
    Circle circle;
    Square square;

    drawShape(&circle);
    drawShape(&square);

    return 0;
}