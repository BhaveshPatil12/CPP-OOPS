#include<iostream>
using namespace std;
class employee
{
    private:
        int emp_no;
        char name[10], address[40];
    public:
    friend istream& operator>>(istream &in, employee &emp)
    {
        cout<<"Enter employee no: ";
        in>>emp.emp_no;
        cout<<"Enter employee Name: ";
        in>>emp.name;
        cout<<"Enter employee address: ";
        in>>emp.address;
        return in;
        
    }
    
    friend ostream& operator<<(ostream &out, employee &emp)
    {
        out<<"Emp no: "<<emp.emp_no<<endl<<"Name: "<<emp.name<<endl<<"Address: "<<emp.address<<endl;
        return out;
    }
};
    

int main()
{
   employee e1,e2;
   cout<<"enter record for employee 1:\n";
   cin>>e1;
   cout<<"enter record for employee 2:\n";
   cin>>e2;
   cout<<"record of employee 1:\n";
   cout<<e1;
     cout<<"record of employee 2:\n";
   cout<<e2;
    
}