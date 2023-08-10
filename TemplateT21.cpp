#include<iostream>
#include<stdio.h>
using namespace std;
template<class T>
class TClassMax {
    T x, y;
public:
    TClassMax() {
    }
    TClassMax(T first, T second) {
        x = first;
        y = second;
    }

    T getMaximun() {
        if (x > y)
            return x;
        else
            return y;
    }
};

int main() {
    TClassMax <int> iMax; 
    int a, b, i;
    TClassMax <float> fMax; 
    float c, d, j;

    cout << "Class Template Programs : Generic Programming : Get Maximum Number \n";
    cout << "Enter A,B values(integer):";
    cin >> a>>b;
    iMax = TClassMax<int>(a, b);
    i = iMax.getMaximun();
    cout << "Result Max Int : " << i;

    cout << "\n\nEnter C,D values(float):";
    cin >> c>>d;
    fMax = TClassMax<float>(c, d);
    j = fMax.getMaximun();
    cout << "Result Max Float : " << j;
    return 0;
}