#include<iostream>
using namespace std;
class Demo {
private:
    int X, Y;
public:
    Demo()
    {
        X = 0;
        Y = 0;

        cout << endl
             << "Constructor Called";
    }
    Demo(int X, int Y)
    {
        this->X = X;
        this->Y = Y;

        cout << endl
             << "Constructor Called";
    }
    ~Demo()
    {
        cout << endl
             << "Destructor Called" << endl;
    }
    void putValues()
    {
        cout << endl
             << "Value of X : " << X;
        cout << endl
             << "Value of Y : " << Y << endl;
    }
};
int main()
{
    Demo d1 = Demo(10, 20);
    cout << endl
         << "D1 Value Are : ";
    d1.putValues();
    Demo d2 = Demo(30, 40);
    cout << endl
         << "D2 Value Are : ";
    d2.putValues();
    return 0;
}
