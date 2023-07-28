#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main() {
    char c, fname[10];
    ofstream out;
    cout << "Enter File name:";
    cin>>fname;
    out.open(fname);
    cout << "Enter contents to store in file (Enter # at end):\n";
    while ((c = getchar()) != '#') {
        out << c;
    }
    out.close();
}