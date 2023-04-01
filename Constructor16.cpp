#include<iostream>
using namespace std;
class SUBJECT
{
        int days;
        int subjectno;
        public:
                SUBJECT(int d=123, int sn=101);
                void printsubject(void)
                {
                        cout<<"\nSubject No: "<<subjectno<<"\n";
                        cout<<"\nDays: "<<days<<"\n";
                }
};

SUBJECT::SUBJECT(int d, int sn)
{
        cout<<"\nConstructing SUBJECT......\n";
        days=d;
        subjectno=sn;
}

class STUDENT
{
        int rollno;
        float marks;
        public:
                STUDENT()
                {
                        cout<<"\nConstructing STUDENT..........\n";
                        rollno=0;
                        marks=0.0;
                }
                void getvalue(void)
                {
                        cout<<"\nEnter roll number :: ";
                        cin>>rollno;
                        cout<<"\nEnter marks :: ";
                        cin>>marks;
                }
                void print(void)
                {
                        cout<<"\nRoll No: "<<rollno<<"\n";
                        cout<<"\nMarks: "<<marks<<"\n";
                }
};

class ADMISSION
{
        SUBJECT sub;
        STUDENT stud;
        float fees;
        public:
                ADMISSION()
                {
                        cout<<"\nConstructing ADMISSION........\n";
                        fees=0.0;
                }
                void print(void)
                {
                        stud.print();
                        sub.printsubject();
                        cout<<"\nFees :: "<<fees<<"\n";
                }
};
int main()
{
        ADMISSION adm;
        adm.print();
        cout<<"\n\nBack to main()......\n";

        return 0;
}
