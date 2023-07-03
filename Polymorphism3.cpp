#include<iostream>  
using namespace std;  
class Animal { 
public:  
    void f()  
    {   
        cout << "Eating..." << endl;  
    }  
};  
class Man : public Animal   
{  
public:  
    void f()  
    {  
        cout << "Walking ..." << endl;  
    }  
};  
int main(void)  
{  
    Animal A = Animal();  
    A.f();   
    Man m = Man();  
    m.f(); 
    return 0;  
}  