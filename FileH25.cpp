//C++ program to demonstrate example of tellg() and tellp() function.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("sample.txt",ios::out);
    if(!file)
    {
        cout<<"Error in creating file!!!";
        return 0;
    }
    file<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<"Current position is: "<<file.tellp()<<endl;
    file.close();
    file.open("sample.txt",ios::in);
    if(!file)
    {
        cout<<"Error in opening file!!!";
        return 0;
    }
    cout<<"After opening file position is: "<<file.tellg()<<endl;
    char ch;
    while(!file.eof())
    {
        cout<<"At position : "<<file.tellg();   
        file>>ch;   
        cout<<" Character \""<<ch<<"\""<<endl;
    }
    file.close();
    return 0;
}
