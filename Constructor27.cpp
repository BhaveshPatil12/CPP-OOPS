#include<iostream>
#include<string.h>
using namespace std;
class PrepInsta
{
    char *prepString;
    public:
    PrepInsta(const char *prepString1)
    {
        prepString = new char[16]; 
        strcpy(prepString, prepString1);
    }
    void concatenate(const char *prepString1)
    {
        strcat(prepString, prepString1); 
    }
    void print()
    {
        cout << prepString << endl;
    }
};
int main()
{
    PrepInsta obj1("Prep");
    PrepInsta obj2 = obj1; 
    cout << "Before concatenation - " << endl;
    obj1.print();
    obj2.print();
    obj1.concatenate("Insta");
    cout << "\nAfter concatenation - " << endl;
    obj1.print();
    obj2.print();
    return 0;
}