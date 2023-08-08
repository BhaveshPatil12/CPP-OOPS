#include<iostream>
using namespace std;
template <class T>
inline T square(T x)
{
   T result;
   result = x * x;
   return result;
};
template <>
string square<string>(string ss)
{
   return (ss+ss);
};

int main()
{
   int i = 2, ii;
   string ww("Aaa");

   ii = square<int>(i);
   cout << i << ": " << ii << endl;

    cout << square<string>(ww) << endl;
    return 0;
}