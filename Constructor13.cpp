#include<iostream>
using namespace std;
class RectArea
{
    private:
        int length;
        int breadth;
    public:
        RectArea (int,int);

        int areaofrect ()
        {
            return (length * breadth);
        }
        int length1()
        {
            return length;
        }

        int breadth1()
        {
            return breadth;
        }
};
RectArea::RectArea(int x, int y)
{
    length = x;
    breadth = y;
}
int main ()
{
    RectArea myrectangle (2,2);
    cout<<"The Length of Rectangle :: "<<myrectangle.length1()<<"\n";
    cout<<"\nThe Breadth of Rectangle :: "<<myrectangle.breadth1()<<"\n";
    cout << "\nThe area of rectangle is :: " << myrectangle.areaofrect()<< endl;
    return 0;
}