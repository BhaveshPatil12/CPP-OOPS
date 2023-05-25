#include<iostream>
#include<cstring>
using namespace std;
class T4Tutorials{
   private: 
           char str[30];
   public:
          void input();
          void show();
          void operator== (T4Tutorials formal_parameter);
          int operator= (T4Tutorials formal_parameter);
          void operator+ (T4Tutorials formal_parameter);
          void operator<< (T4Tutorials formal_parameter);
          void operator>> (T4Tutorials formal_parameter);
          int operator/ (T4Tutorials formal_parameter);
          void palindrome();
}; 
void T4Tutorials::input()
{
  cout<<"\nPlease Enter the string : ";
  cin>>str;
}
void T4Tutorials::show()
{
   cout<<"\n"<<str;
}
void T4Tutorials::operator== (T4Tutorials formal_parameter)
{
   strcpy(formal_parameter.str,str);
   cout<<"\n\tCopied String is : "<<formal_parameter.str;
}
int T4Tutorials::operator= (T4Tutorials formal_parameter)
{
   if(strcmp(str,formal_parameter.str)==0)
     return 1; 
     return 0;  
}
void T4Tutorials::operator+ (T4Tutorials formal_parameter)
{
   strcat(str,formal_parameter.str);
   cout<<"\n\t--String After Concat is : "<<str;
}
void T4Tutorials::operator<< (T4Tutorials formal_parameter)
{
   cout<<"\n\t--The string you entered is :"<<formal_parameter.str;
}
void T4Tutorials::operator>> (T4Tutorials formal_parameter)
{
   int i;
   cout<<"\n\t--The string after reversing is : ";
   for(i=strlen(formal_parameter.str);i>=0;i--)
     cout<<formal_parameter.str[i];
}
int T4Tutorials::operator/ (T4Tutorials formal_parameter)
{
   int flag=0,k,i,j,len=strlen(str),len1=strlen(formal_parameter.str)-1;
   for(i=0;i<len;i++)
    {
      if(str[i]==formal_parameter.str[0])
       {
        if(str[i+len1]==formal_parameter.str[len1])
          {
           for(j=i,k=0;j<i+len1+1,k<len1;j++,k++)
             {
              if(str[j]==formal_parameter.str[k])
                flag=1;
              else
                { 
                  flag=0;
                  break;
                } 
              }
           }
        }
    }
   if(flag==0)
     return 0; 
     return 1;  
}
void T4Tutorials::palindrome()
{
  int i,j,flag=0;
   for(i=0,j=strlen(str)-1;i<=strlen(str),j>=0;j--,i++)
    {
     if(str[i]!=str[j])
       {
         flag=1;
         cout<<"\n\t****Not a palindrome****";
         break;
      }
       else
          flag=0;
    }
     if(flag==0)
        cout<<"\n\t--Palindrome--";
}
int main()
{
    int opt,c,opt1=1;
    T4Tutorials a,b;
    while(opt1==1 && opt!=8)
	{
    cout<<"\nMain Menu\n\t1.Equality\n\t2.String Copy\n\t3.Concat";
    cout<<"\n\t4.Show\n\t5.Reverse\n\t6.Palindrome\n\t7.Sub String";
    cout<<"\n\t8.Exit\n"<<endl<<"Please Enter your choice:";
    cin>>opt;
     switch(opt)
      {
             case 1:
                      cout<<"\nEnter the 1st string-\n";
                      a.input();
                      cout<<"\nEnter the 2nd string-\n";
                      b.input();
                       c=a=b;
                       if(c==1)
                           cout<<"\n\t****Strings are Equal****\n";
                       else
                           cout<<"\n\t****Strings are not Equal****\n";
                       break;
             case 2:
                       a.input();
                       a==b;
                       break;
             case 3:  
                      cout<<"\nEnter the 1st string-\n";
                      a.input();
                      cout<<"\nEnter the 2nd string-\n";
                      b.input();
                     a+b;  
                     break;
             case 4:
                     a.input();
                      b<<a;
                      break;
             case 5:
                     a.input();
                      b>>a;
                      break;
             case 6:
                     a.input();
                     a.palindrome();
                      break;
             case 7:
                     cout<<"\nEnter the Main string-\n";
                     a.input();
                     cout<<"\nEnter the other string-\n";
                     b.input();
                      c=a/b;
                       if(c==1)
                           cout<<"\n\t****Substring****\n";
                       else
                           cout<<"\n\t****Not a substring****\n";
                     break;
            case 8: return 0;
			 
			 default: cout<<"Invalid choice..try again\n";
      } 
       if(opt!=8){
       cout<<"\n\n\tDo you want to continue(Press 1 to continue)";
       cin>>opt1;}
     }
    return 0;
}