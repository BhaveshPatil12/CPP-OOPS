#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class fd
{
        int fdno,mnth;
        float amt, rate, m_amt;
        char nm[20];
    public:
        fd(int fno, int mnt, float am, float rt, char *name)
        {
                fdno=fno;
                mnth=mnt;
                amt=am;
                rate=rt;
                strcpy(nm, name);
        }
        void calculate()
        {
                double yr;
                yr=mnth/12.0;
                m_amt=amt*pow((1+rate/100), yr);
        }
        void display()
        {
                cout<<"\n FdNo.           :  "<<fdno;
                cout<<"\n Month           :  "<<mnth;
                cout<<"\n Amount          :  "<<amt;
                cout<<"\n Rate            :  "<<rate;
                cout<<"\n Maturity Amount :  "<<m_amt;
                cout<<"\n Name            :  "<<nm;
        }
};

int main()
{
        int fdno, mnth;
        float amt, rate;
        char nm[20];
        cout<<"\n Enter Details : \n";
        cout<<"\n Enter FD No. :  ";\
        cin>>fdno;
        cout<<"\n Enter Month  :  ";
        cin>>mnth;
        cout<<"\n Enter Amount :  ";
        cin>>amt;
        cout<<"\n Enter Rate   :  ";
        cin>>rate;
        cout<<"\n Enter Name   :  ";
        cin>>nm;
        fd f1(fdno, mnth, amt, rate, nm);
        f1.calculate();
        f1.display();
        return 0;
}

