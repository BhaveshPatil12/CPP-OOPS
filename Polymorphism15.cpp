#include<iostream>
using namespace std;
class Insta
{
    int x, y;
    double z;
  
    public:
    void myFunction(){
        cout << "No arguments passed here" << endl;
    }
  
    void myFunction(int x1){
        x = x1;
        cout << x << " was passed here (int value)" << endl;
    }
  
    void myFunction(double x1){
        z = x1;
        cout << z << " was passed here (double value)" << endl;
    }
  
    void myFunction(int x1, int y1){
        x = x1;
        y = y1;
        cout << x << " and " << y << " were passed here (int values)" << endl;
    }
};

int main(){
    Insta obj;
    obj.myFunction();
    obj.myFunction(10);
    obj.myFunction(10.00);
    obj.myFunction(10,20);
    return 0;
}