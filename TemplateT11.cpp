#include<iostream>
using namespace std;
template<class T> T sum(T a[], int length)
{
        T ret = a[0];
        for (int i = 1; i < length; i ++)
                ret += a[i];

        return ret;
}
int main(void) {
        int int_data[5];
        float float_data[5];
        int i = 0;
        cout << "\nInput 5 integers :: \n" << endl;
        for (; i < 5; i++)
                cin >> int_data[i];
        cout << "\nSum of above is :: " << sum(int_data, 5) << endl;
        cout << "\nInput 5 floats :: \n" << endl;
        for (i = 0; i < 5; i ++)
                cin >> float_data[i];
        cout << "\nSum of above is :: " << sum(float_data, 5) << endl;

        cin.get();
        return 0;
}
