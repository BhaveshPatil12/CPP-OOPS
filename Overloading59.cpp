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
            kmeter= km;
            meter = m;
        }
        void operator = (const Length &l) 
        { 
            kmeter = l.kmeter;
            meter = l.meter;
        }
        void displayLength() 
        {
            cout << kmeter << " Kms "<< meter << " meters" << endl;
        }
};

int main() 
{
    Length len1(1, 100);
    Length len2(2, 200);
    cout <<"Len1 length: "; 
    len1.displayLength();
    cout <<"Len2 length: "; 
    len2.displayLength();
    len1 = len2;
    cout << "\nLen1 Length: "; 
    len1.displayLength();
    cout << "Len2 Length: "; 
    len2.displayLength();
    return 0;
}