#include<iostream>
using namespace std;
class A {
    protected:
    float a;
    public:
    void seta(float n1) {
        a = n1;
    }
};
class B : public A {
    public:
    void modifyA() {
        a/=2;
    }
};
class C {
    protected:
    float c;
    public:
    void setc(float n2) {
        c = n2;
    }
};
class D : public B, public C {
    public:
    float modify() {
        modifyA();
        cout<<"Result = "<<a*c;
    }
};
int main() {
  D obj;
  obj.seta(15.6);
  obj.setc(9.7);
  obj.modify();
  return 0;
}