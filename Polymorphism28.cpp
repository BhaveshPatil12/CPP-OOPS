#include<iostream>
using namespace std;
class functionOverloadingExample
{
    public:
    void myFunc(int a)
    {
        cout << "a = " << a << "\n\n";
    }
    void myFunc(double a)
    {
        cout << "a =  " << a << "\n\n";
    }
    void myFunc(int a, int b)
    {
        cout << "a = " << a << ", b = " << b << "\n\n";
    }
};

int main() {
    functionOverloadingExample obj;
    obj.myFunc(10);
    obj.myFunc(10.20);
    obj.myFunc(100, 200);
    return 0;

}