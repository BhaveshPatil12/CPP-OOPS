#include<iostream>
using namespace std;
class Demo {
private:
    int X;
    int Y;
public:
    Demo(int a, int b);
    Demo(const Demo& d);
    void Display();
};
Demo::Demo(int a, int b)
{
    X = a;
    Y = b;
}
Demo::Demo(const Demo& d)
{
    X = d.X;
    Y = d.Y;
}
void Demo::Display()
{
    cout << endl
         << "X: " << X;
    cout << endl
         << "Y: " << Y << endl;
}

int main()
{
    Demo d1(10, 20);
    cout << endl
         << "D1 Object: " << endl;
    cout << "Value after initialization : ";
    d1.Display();
    Demo d2 = Demo(d1); 
    cout << endl
         << "D2 Object: " << endl;
    cout << "Value after initialization : ";
    d2.Display();
    return 0;
}
