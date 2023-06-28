#include<iostream> 
using namespace std;
class MyClass {
    private:
        int x, y;
    public:
        MyClass() {
            x = 0;
            y = 0;
        }
        
        MyClass(int a) {
            x = a;
            y = 0;
        }
        
        MyClass(int a, int b) {
            x = a;
            y = b;
        }
        
        void print() {
            std::cout << "x = " << x << ", y = " << y << std::endl;
        }
};

int main() {
    MyClass obj1;
    MyClass obj2(5);
    MyClass obj3(3, 7);
    obj1.print();
    obj2.print();
    obj3.print();
    return 0;
}