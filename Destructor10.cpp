#include<iostream>
using namespace std;
class Test
{
    public:
    Test ()
    {
        cout << "Test Created" << endl;
    }
    ~Test ()
    {
        cout << "Test Destroyed" << endl;
    }
};

void fun()
{
    Test t;
}
int main()
{
    fun();
}