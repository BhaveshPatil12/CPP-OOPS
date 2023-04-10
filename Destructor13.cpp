#include<iostream>
#include<fstream>
using namespace std;
class Test
{
    int *p;
    ifstream fis;

    Test ()
    {
        p = new int[10];
        fis.open ("my.txt");
    }
    ~Test ()
    {
        delete[]p;
        fis.close ();
    }
};