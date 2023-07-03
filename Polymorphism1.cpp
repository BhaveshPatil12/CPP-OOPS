#include<iostream>
using namespace std;
class Addition {

    public:
        int sumOf(int n1, int n2) {
            cout << "\nPerforming the addition operation on two integers and the value returned is: ";
            return n1 + n2;
        }
    int sumOf(int n1, int n2, int n3) {
        cout << "\nPerforming the addition operation on three integers and the value returned is: ";
        return n1 + n2 + n3;
    }
    int sumOf(int n1, int n2, int n3, int n4) {
        cout << "\nPerforming the addition operation on four integer values and the value returned is: ";
        return n1 + n2 + n3 + n4;
    }
};

int main() {
    Addition add;
    cout << add.sumOf(3, 5) << "\n\n";
    cout << add.sumOf(3, 5, 10) << "\n\n";
    cout << add.sumOf(3, 5, 7, 10) << "\n\n";
    cout << "\n\nExiting the main() method\n\n\n";
    return 0;
}