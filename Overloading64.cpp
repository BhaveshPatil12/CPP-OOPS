#include<iostream>  
using namespace std;
class Time
{
    int hour, mins, secs;
    public:
    Time(){
        hour=0, mins=0; secs=0;
    }
    Time(int h, int m, int s)
    {
        if(h>=0 && h <=23 && m >=0 && m <=59 && s >0 && s <=59)
            { hour=h, mins=m; secs=s; }
        else
            cout << "Invalid time format, values would be 00:00:00 by default" << endl;
    }
    bool operator == (const Time& t2)
    {
        return (hour == t2.hour 
        && mins == t2.mins 
        && secs == t2.secs);
    }
};

int main()
{
    Time t1(7,11,30);
    Time t2(3,30,41);
    if(t1 == t2)
        cout << "Clocks show same time";
    else 
        cout << "Clocks show different times";
    return 0;
}
