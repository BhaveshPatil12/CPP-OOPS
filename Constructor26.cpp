#include<iostream>
using namespace std;
class Insta { 
    private: 
    int a, b;
    public: 
    Insta(int a1, int b1) 
    { 
        a = a1; 
        b = b1; 
    } 
    int getA() 
    { 
        return a; 
    } 
  
    int getB() 
    { 
        return b; 
    } 
};

int main() 
{ 
  Insta obj1(10, 15);
  cout << "a = " << obj1.getA() << ", b = " << obj1.getB(); 
  return 0; 
}