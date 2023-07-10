#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imaginary;
    Complex(int new_real = 0, int new_imaginary = 0){
        real = new_real;
        imaginary = new_imaginary;
    }
    Complex operator + (const Complex& obj) {
        Complex tmp;
        tmp.real = real + obj.real;
        tmp.imaginary = imaginary + obj.imaginary;
        return tmp;
    }
    void print_number(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};
int main(){
    Complex C1(5,6), C2(2,3);
    cout<<"C1 = ";
    C1.print_number();
    cout<<"C2 = ";
    C2.print_number();
    Complex C3 = C1 + C2;
    cout<<"C3 = C1 + C2 = ";
    C3.print_number();
    cout<<"The sum of 10 and 15 is: "<<10+15;
    return 0;
}