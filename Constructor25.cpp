#include<iostream>
using namespace std;
class construct { 
    public: 
    int a, b;  
    construct() 
    { 
        a = 10; 
        b = 20; 
    } 
};

int main() 
{ 
    construct c; 
    int sum = c.a + c.b;
    cout << "a : " << c.a << endl;
    cout << "b : " << c.b << endl;
    cout << "sum : " << sum << endl; 
    return 0; 
}