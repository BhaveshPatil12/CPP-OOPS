#include<iostream>
using namespace std;
int count=0;
class practice
{
    public:
        practice()
        {
            count++;
            cout<<"\nObject created:\t"<<count;
        }
        
        ~practice()
        {
            cout<<"\nObject destroyed:\t"<<count;
            --count;
        }
};

main()
{
    practice t,t1,t2,t3;
    return 0;
}