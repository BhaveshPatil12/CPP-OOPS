#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     cout<<"\nText File 1 is opened........\n";
     ifstream fin("C:\\Users\\acer\\Documents\\file4.txt");
     int line=1,word=1,size;
     char ch;
     fin.seekg(0,ios::end); 
     size=fin.tellg(); 
     fin.seekg(0,ios::beg);
     while(fin)
     {
      fin.get(ch);
      if(ch==' '||ch=='\n')
       word++;
      if(ch=='\n')
       line++;
     }
     cout<<"\nNo. of Lines = "<<line<<"\n\nNo. of Words = "<<word;
     cout<<"\n\nSize of Text File="<<size<<"\n";
     fin.close(); 
     return 0;
}