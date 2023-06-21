#include<iostream>
#include<vector>
using namespace std;
class shape {
    public:
        int l, b, s;
    public:
        void input() {
            cout << "Enter the length of each side of the Square: \n";
            cin >> s;
            cout << "\n";
            cout << "Enter the length and breadth of the Rectangle: \n";
            cin >> l >> b;
            cout << "\n";
        }
    public:
        void area(int side) {
            cout << "Area of Square = " << side * side;
            cout << "\n";
        }

    void area(int length, int breadth) {
        cout << "Area of Rectangle = " << length * breadth;
        cout << "\n";
    }
};
int main() {
	 cout << " =====  Program to demonstrate Method Overloading in a Class, in CPP  ===== \n\n";
    shape sh;
    cout << "\nCalling the input() function to take the values from the user\n";
    sh.input();
    cout << "\nCalling the area(int) function to calculate the area of the Square\n";
    sh.area(sh.s);
    cout << "\nCalling the area(int,int) function to calculate the area of the Rectangle\n";
    sh.area(sh.l, sh.b);
    cout << "\nExiting the main() method\n\n\n";
    return 0;
}