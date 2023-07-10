#include<iostream>
using namespace std;
class Base_class{
    public:
    int base_var = 25;
    virtual void display(){
        cout<<"The value of the base variable is: "<<base_var<<endl;
    }
};
class Derived_class: public Base_class{
    public:
    int derived_var = 80;
    void display(){
        cout<<"The value of the base variable is: "
            <<base_var<<endl
            <<"The value of the derived variable is: "
            <<derived_var<<endl;
    }
};

int main(){
    Derived_class obj;
    Base_class* ptr = &obj;
    ptr->display();
    return 0;
}