#include<iostream>
using namespace std;
template<class t>

void swap(t &x, t &y) {
    t temp = x;
    x = y;
    y = temp;
}

void fun(int a, int b, float c, float d) {
    cout << "\na and b before swaping :" << a << "\t" << b;
    cout << "\na and b after swaping  :" << a << "\t" << b;
    cout << "\n\nc and d before swaping :" << c << "\t" << d;
    cout << "\nc and d after swaping  :" << c << "\t" << d;
}

int main() {
    int a, b;
    float c, d;
    cout << "Enter A,B values(integer):";
    cin >> a>>b;
    cout << "Enter C,D values(float):";
    cin >> c>>d;
    fun(a, b, c, d);
    return 0;
}