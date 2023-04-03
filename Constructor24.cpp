#include<iostream>
#define P 5
using namespace std;
class Test
{
    int a, b;
public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void print()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Test* arr = (Test*)malloc(sizeof(Test) * P);
    for (int k = 0; k < P; k++)
          {
        arr[k] = Test(k, k + 1);
    }
    for (int k = 0; k < P; k++)
           {
        arr[k].print();
    }
    return 0;
}