#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#define MAX 3
using namespace std;
class Item
{
     public:
          char code[6];
          char name[200];
          int qty, price;
     public:
          void AcceptData();
          void DisplayData();
          friend void Sort(Item *, int);
};
void Item::AcceptData()
{
     cout<<"\n Item Code : ";
     cin>>code;
     cout<<"\n Item Name : ";
     cin>>name;
     cout<<"\n Quantity  : ";
     cin>>qty;
     cout<<"\n Price     : ";
     cin>>price;
     cout<<"\n --------------------------------- \n\n";
}
void Item::DisplayData()
{
     cout.setf(ios::left, ios::adjustfield);
     cout<<setw(8)<<code<<setw(8)<<name;

     cout.setf(ios::right, ios::adjustfield);
     cout<<setw(8)<<qty<<setw(8)<<price<<endl;
}
void Sort(Item * T, int n)   //Sort() function for arranging the price in descending order
{
     for(int i = 0; i < n - 1; i++)
     {
          for(int j = 0; j < n - 1 - i; j++)
          {
               if(T[j].price < T[j + 1].price)
               {
                    Item tmp = T[j];
                    T[j] = T[j + 1];
                    T[j + 1] = tmp;
               }
          }
     }
}
int main( )
{
     Item it[MAX];
     int i;
     fstream file;

     for(i=0; i<MAX; i++)

     it[i].AcceptData();
     Sort(it, MAX);
     file.open("item.txt", ios::trunc | ios::in | ios::out | ios::binary);
     file.seekg(0, ios::beg);
     file.clear();
     for(i=0; i<MAX; i++)
     file.write((char *)&it[i], sizeof(it));
     file.seekg(0, ios::beg);
     cout<<" Displaying Data ";
     cout<<"\n --------------------------------- \n";
     for(i=0; i<MAX; i++)
     {
          file.read((char *)&it[i], sizeof(it));
          it[i].DisplayData();
     }
     return 0;
}