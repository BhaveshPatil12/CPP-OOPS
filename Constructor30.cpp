#include<iostream>
#include<conio.h>
using namespace std;
class Easyexmple {
int j, k;
public:
Easyexmple (int m, int n) {
j = m;
k = n;
cout << "In this Constructor\n";
}
void Display () {
cout << "Values:" << j << "\t" << k;
}
};
int main () {
Easyexmple Object (30, 40);
Object.Display();
getch ();
return 0;
}