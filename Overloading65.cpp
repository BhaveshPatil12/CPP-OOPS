#include<iostream>
using namespace std;
class test
{
   private:
   int i;
   public:
   test(): i(0) { }
void operator ++()
{
++i;
}

void display()
{
cout << "i:" << i << "\t";
}
};

int main()
{
test t;
t.display();
++t;
t.display();
return 0;
}