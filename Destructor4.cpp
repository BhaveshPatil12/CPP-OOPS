#include<iostream>
using namespace std;
class parent {
    ~parent() { cout << "destructor called" << endl; }
public:
    parent() { cout << "constructor called" << endl; }
    void destruct() { delete this; }
};
 
int main()
{
    parent* p;
    p = new parent;
    p->destruct();
    return 0;
}