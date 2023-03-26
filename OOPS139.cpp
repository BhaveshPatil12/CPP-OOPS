#include<iostream>
#include<string.h>
using namespace std;
class Marks {
private:
    int rno;
    float perc;
public:
    Marks()
    {
        rno = 0;
        perc = 0.0f;
    }
    void readMarks(void)
    {
        cout << "Enter roll number: ";
        cin >> rno;
        cout << "Enter percentage: ";
        cin >> perc;
    }
    void printMarks(void)
    {
        cout << "Roll No.: " << rno << endl;
        cout << "Percentage: " << perc << "%" << endl;
    }
};

class Student {
private:
    Marks objM;
    char name[30];
public:
    void readStudent(void)
    {
        cout << "Enter name: ";
        cin.getline(name, 30);
        objM.readMarks();
    }
    void printStudent(void)
    {
        cout << "Name: " << name << endl;
        objM.printMarks();
    }
};
int main()
{
    Student std;
    std.readStudent();
    std.printStudent();
    return 0;
}
