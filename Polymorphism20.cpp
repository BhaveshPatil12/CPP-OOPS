#include<iostream>
using namespace std;
class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {}
    Fraction operator+(const Fraction& other) {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }
    Fraction operator-(const Fraction& other) {
        int num = numerator * other.denominator - other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }
    friend ostream& operator<<(ostream& out, const Fraction& fraction) {
        out << fraction.numerator << "/" << fraction.denominator;
        return out;
    }
};

int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 4);
    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    cout << "Fraction 1: " << fraction1 << endl;
    cout << "Fraction 2: " << fraction2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    return 0;
}