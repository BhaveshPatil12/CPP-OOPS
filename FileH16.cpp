#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    cout<<"Text File 1 is going to created........\n";
    ofstream fout("C:\\Users\\acer\\Documents\\file4.txt"); 

    cout<<"\nText File 1 is opened for writing........\n";
    ifstream fin("C:\\Users\\acer\\Documents\\file4.txt");
    fout<<"Welcome to CodezClub......!!";

    cout<<"\nWriting to Text File 1 is successfully completed........\n";
    fout.close();                            

    cout<<"\n\nText File 2 is going to create........\n";
    fout.open("C:\\Users\\acer\\Documents\\file5.txt"); 

    char ch;

    cout<<"\nText File 2 is opened for writing........\n";
    while(fin) 
    {
        fin>>ch;     
        fout<<ch;       
    }

    cout<<"\nWriting to Text File 2 from File 1 is successfully completed.\n";
    fin.close();
    fout.close();
    return 0;
}