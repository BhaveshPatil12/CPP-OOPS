#include<iostream>
using namespace std;
class A {
private:
    int a;

public:
    void get_a(int val_a)
    {
        a = val_a;
    }

    void disp_a(void)
    {
        cout << "Value of a: " << a << endl;
    }
};
class B : public A {
private:
    int b;

public:
    void get_b(int val_a, int val_b)
    {
        get_a(val_a);
        b = val_b;
    }

    void disp_b(void)
    {
        disp_a();
        cout << "Value of b: " << b << endl;
    }
};
class C : public B {
private:
    int c;

public:
    void get_c(int val_a, int val_b, int val_c)
    {
        get_b(val_a, val_b);
        c = val_c;
    }

    void disp_c(void)
    {
        disp_b();
        cout << "Value of c: " << c << endl;
    }
};

int main()
{
    C objC;
    objC.get_c(10, 20, 30);
    objC.disp_c();
    return 0;
}
