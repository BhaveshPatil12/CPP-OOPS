#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char filename[30], ch, str[1000];
   int tot=0, i=0, tot_blanks=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>filename;
   fp.open(filename, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
   {
      str[tot] = ch;
      tot++;
   }
   fp.close();
   str[tot]='\0';
   while(str[i]!='\0')
   {
      if(str[i]==' ')
         tot_blanks++;
      i++;
   }
   cout<<endl<<"Total Number of Blank Spaces = "<<tot_blanks;
   cout<<endl;
   return 0;
}