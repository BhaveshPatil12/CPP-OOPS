#include<iostream>
using namespace std;
class Length {
public:
    int feet, inches;
    Length()
    {
        this->feet = 0;
        this->inches = 0;
    }
  
    Length(int f, int i)
    {
        this->feet = f;
        this->inches = i;
    }
  
       friend Length operator + (Length&, 
                                Length&);
};
  
Length operator+(Length& l1,
                   Length& l2) 
{
        Length l3;
  
    l3.feet = l1.feet + l2.feet;
    l3.inches = l1.inches + l2.inches;
  
   
    return l3;
}
  
int main()
{
    Length l1(8, 9);
    Length l2(10, 2);
    Length l3;
    l3 = l1 + l2;
    cout << "\nTotal Feet & inches: " << 
    l3.feet << "'" << l3.inches;
    return 0;
}