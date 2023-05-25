#include<iostream>
#include<conio.h>
using namespace std;
class T4Tutorials
{
      private:
                    int MyArray[10][10];
                    int u,v;
      public:
                    void show();
                    T4Tutorials operator +(T4Tutorials);
                    T4Tutorials operator *(T4Tutorials);
                    void read();
};
//+ operator is overloaded
           T4Tutorials T4Tutorials::operator+(T4Tutorials formal_parameters)
      {
               T4Tutorials t;
               t.u=u;
               t.v=v;
               cout<<t.u;
               cout<<t.v;
               for(int i=0;i<t.u;i++)
                    for(int j=0;j<t.v;j++)
                         t.MyArray[i][i]=MyArray[i][i]+formal_parameters.MyArray[i][i];
                         return t;
      }
//* operator is overloaded
          T4Tutorials T4Tutorials::operator*(T4Tutorials formal_parameters)
     {
               T4Tutorials t;
               t.u=u;
               t.v=formal_parameters.v;
               for(int i=0;i<t.u;i++)
                    for(int j=0;j<t.v;j++)
                        {
                           t.MyArray[i][i]=0;
                           for(int k=0;k<v;k++)
                                  t.MyArray[i][j]+=MyArray[i][k]*formal_parameters.MyArray[k][j];
                        }
                                  return t;
       }
           void T4Tutorials::read()
       {
              cout<<"Please Enter Size of Matrix like 2 x 2:\n";
              cin>>u>>v;
              cout<<"Please Enter the Elements in the Matrix :\n";
              for(int i=0;i<u;i++)
                   for(int j=0;j<v;j++)
                       cin>>MyArray[i][j];
     }
             void T4Tutorials::show()
     {
             for(int i=0;i<u;i++)
                  {
                  for(int j=0;j<v;j++)
                       {
                             cout<<MyArray[i][j]<<"\t";
                            
                        }
                             cout<<"\n";
                  }
     }
             int main()
     {
                T4Tutorials object1 ,object2,object3;
                cout<<"Please Enter First Matrix\n";
                object1.read();
                cout<<"Please Enter Second Matrix\n";
                object2.read();
                object3=object1 +object2;
                cout<<"Result After Addition of two Matrix\n";
                object3.show();
                object3=object1 *object2;
                cout<<"Result After Multiplication of two Matrix\n";
                object3.show();
                getch();
     }