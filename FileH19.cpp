#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   fstream fp;
   char buf[100];
   int pos;
   fp.open("C:\\Users\\acer\\Documents\\file4.txt", ios :: out | ios :: ate);
   cout << "\nWriting to a file ... " << endl;
   fp << "This is a one line" << endl; 
   fp << "This is a another line\n" << endl; 

   pos = fp.tellp();
   cout << "\nCurrent position of put pointer : " << pos << endl;
   fp.seekp(-10, ios :: cur);
   fp << endl << "Writing at a random location  ";
   fp.seekp(7, ios :: beg);
   fp << " Hello World  ";
   fp.close(); 
   cout << "\nWriting Complete .... " << endl;
   fp.open("C:\\Users\\acer\\Documents\\file4.txt", ios :: in | ios :: ate);
   cout << "\nReading from the file ... \n" << endl;

   fp.seekg(0);
   while (!fp.eof())
    {
      fp.getline(buf, 100);
      cout << buf << endl;
   }

   pos = fp.tellg();
   cout << "\nCurrent Position of get pointer : " << pos << endl;
   return 0;
}