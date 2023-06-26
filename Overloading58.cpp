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
      friend ostream &operator<<( ostream &output, const Length &l ) 
      { 
         output <<l.kmeter<< "Km "<<l.meter<<"M" ;
         return output;            
      }
      friend istream &operator>>( istream  &input, Length &l ) 
      { 
         input >> l.kmeter >> l.meter;
         return input;            
      }
};

int main() {
   Length l1(1, 112), l2;
   cout << "Enter the value: " << endl; cin >> l2;
   cout << "First length: " << l1 << endl;
   cout << "Second length: " << l2 << endl;
   return 0;
}