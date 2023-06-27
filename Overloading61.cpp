#include<iostream>
using namespace std;
class Length
{
   private:
      int kmeter;                   
      int meter;           
   public:
      Length() 
      {
         kmeter = 0;
         meter = 0;
      }
      Length(int km, int m) 
      {
         kmeter = km;
         meter = m;
      }
      Length operator()(int x, int y, int z)
      {
         Length l;
         
         l.kmeter = x + z + 10;
         l.meter = y + z + 100 ;
         return l;
      }
      void disLength() {
         cout << kmeter <<"Km " << meter << "M" << endl;
      }   
};

int main() 
{   
   Length l1(1, 112), l2;
   cout << "First length: "; 
   l1.disLength();
   l2 = l1(6, 7, 8); 
   cout << "Second length:"; 
   l2.disLength();
   return 0;
}