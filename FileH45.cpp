#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    fstream st; 
    st.open("E:\studytonight.txt",ios::out);  
    if(!st) 
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created"<<endl;
        st<<"Hello Friends"; 
        cout<<"File Pointer Position is "<<st.tellp()<<endl;  
        st.seekp(-1, ios::cur); 
        cout<<"As per tellp File Pointer Position is "<<st.tellp()<<endl; 
        st.close(); 
    }
    st.open("E:\studytonight.txt",ios::in);   
    if(!st) 
    {
        cout<<"No such file";
    }
    else
    {
        char ch;
        st.seekg(5, ios::beg);  
        cout<<"As per tellg File Pointer Position is "<<st.tellg()<<endl; //Checking file pointer position
        cout<<endl;
        st.seekg(1, ios::cur); 
        cout<<"As per tellg File Pointer Position is "<<st.tellg()<<endl; //Checking file pointer position
        st.close(); 
    }
    return 0;
}