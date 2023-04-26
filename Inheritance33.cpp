#include<iostream>
using namespace std;
class Employee {
    int eno;
    char name[20], des[20];	
public:
    void getEmpDetails() {
        cout << "\nEnter the Employee number:";
        cin>>eno;
        cout << "Enter the Employee name:";
        cin>>name;
        cout << "Enter the Employee designation:";
        cin>>des;
    }
    
    void employee_display() {
    	cout <<"\nEmployee number:"<<eno;
		cout <<"\nEmployee name:"<<name;
		cout <<"\nEmployee designation:"<<des;
    }
};

class Salary : private Employee {
    float bp, hra, da, pf, np;
public:

    void getPayDetails() {
    	getEmpDetails();
        cout << "Enter the Basic pay:";
        cin>>bp;
        cout << "Enter the Humen Resource Allowance:";
        cin>>hra;
        cout << "Enter the Dearness Allowance :";
        cin>>da;
        cout << "Enter the Profitablity Fund:";
        cin>>pf;
    }

    void calculate() {
        np = bp + hra + da - pf;
    }

    void display() {
    	employee_display();
    	cout <<"\nEmployee Basic pay:"<<bp;
		cout <<"\nEmployee Humen Resource Allowance:"<<hra;
		cout <<"\nEmployee Dearness Allowance:"<<da;
		cout <<"\nEmployee Profitablity Fund:"<<pf;
		cout <<"\nEmployee Net Pay:"<<np<<endl;
    }
};

int main() {
    int i, n;
    char ch;
    Salary s[10];
    cout << "Simple Inheritance Private Base Class Example Program : Payroll System \n";
    cout << "Enter the number of employee:";
    cin>>n;
    for (i = 0; i < n; i++) {
    	cout << "\nEmployee Details # "<<(i+1)<<" : ";
        s[i].getPayDetails();
        s[i].calculate();
    }

    for (i = 0; i < n; i++) {
        s[i].display();
    }
    return 0;
}