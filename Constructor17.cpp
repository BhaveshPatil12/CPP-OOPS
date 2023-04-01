#include<iostream>
#include<stdlib.h>
using namespace std;
class Deposit
{
        long int principal;
        int time;
        float rate;
        float totalamount;

        public:
                Deposit();                            // #1
                Deposit(long p, int t, float r);      // #2
                Deposit(long p, int t);               // #3
                Deposit(long p, float r);             // #4
                void calculateamount(void);
                void display(void);
};

Deposit::Deposit()
{
        principal = time = rate = 0.0;
}

Deposit::Deposit(long p, int t, float r)
{
        principal = p;
        time = t;
        rate = r;
}
Deposit::Deposit(long p, int t)
{
        principal = p;
        time = t;
        rate = 0.08;
}

Deposit::Deposit(long p, float r)
{
        principal = p;
        time = 2;
        rate = r;
}
void Deposit::calculateamount(void)
{
        totalamount = principal + (principal*time*rate)/100;
}

void Deposit::display(void)
{
        cout<<"\nPrincipal Amount :: Rs."<<principal<<"\n";
        cout<<"\nNo. of Years :: "<<time<<" years\n";
        cout<<"\nRate of interest :: "<<rate<<"\n";
        cout<<"\nTotal Amount :: Rs."<<totalamount<<"\n";
}
int main()
{
        Deposit d1;
        Deposit d2(2000, 2, 0.07f);
        Deposit d3(4000, 1);
        Deposit d4(3000, 0.12f);

        d1.calculateamount();
        d2.calculateamount();
        d3.calculateamount();
        d4.calculateamount();

        cout<<"Object D1 Details ::-------------- \n";
        d1.display();
        cout<<"\nObject D2 Details ::--------------\n";
        d2.display();
        cout<<"\nObject D3 Details ::----------------\n";
        d3.display();
        cout<<"\nObject D4 Details ::----------------\n";
        d4.display();
        return 0;
}