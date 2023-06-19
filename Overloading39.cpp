#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class mystring
{
    private:
        char str[50];
        int len;
    public:
    mystring (char s[])
    {
        strcpy(str, s);
        len=strlen(str);
        
        
    }
    int operator == (mystring s)
    {
        if(len==s.len)
            return 1;
        else
            return 0;
        
    }
};
int main()
{
  mystring s1("Programming"), s2("digest");
  if(s1==s2)
  
        cout<<"both string have same length";
  else
        cout<<"both string have different lengths";
}