#include<iostream>
using namespace std;
class MyClass
{
         int h;
         int i;
        public:
            MyClass(int j, int k)
       {
            h = j;
            i = k;
       }
           int getlnt()
       {
           return i;
       }
          int getHeight()
      {
          return h;
      }
};

int main()
{
     MyClass myObject[3] =
     {
         MyClass(7, 6),
         MyClass(1,9),
         MyClass(2,3)

     };

    int i;
    for(i=0; i<3; i++)
    {
        cout<<"\nObject [ "<<i+1<<" ] Heights :: ";
       cout << myObject[i].getHeight();
       cout << ", ";
       cout<< myObject[i].getlnt() << "\n";
    }
  return 0;
}