#include<iostream>
using namespace std;
class Arithmatic
{
        float num;
    public:
        void accept()
        {
                cout<<"\n Enter Number  : ";
                cin>>num;
        }
        Arithmatic operator+(Arithmatic &a)
        {
                Arithmatic t;
                t.num=num+a.num;
                return t;
        }
        Arithmatic operator-(Arithmatic &a)
        {
                Arithmatic t;
                t.num=num-a.num;
                return t;
        }
        Arithmatic operator*(Arithmatic &a)
        {
                Arithmatic t;
                t.num=num*a.num;
                return t;
        }
        Arithmatic operator/(Arithmatic &a)
        {
                Arithmatic t;
                t.num=num/a.num;
                return t;
        }
        void display()
        {
                cout<<num;
        }
};
int main()
{
        Arithmatic a1, a2, a3;

        a1.accept();
        a2.accept();
        a3=a1+a2;
        cout<<"\n --------------------------------------------";
        cout<<"\n\n Addition of Two Numbers        :   ";
        a3.display();

        a3=a1-a2;
        cout<<"\n\n Subtraction of Two Numbers     :   ";
        a3.display();

        a3=a1*a2;
        cout<<"\n\n Multiplication of Two Numbers  :   ";
        a3.display();

        a3=a1/a2;
        cout<<"\n\n Division of Two Numbers        :   ";
        a3.display();
        return 0;
}