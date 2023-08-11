#include<iostream>
#include<stdlib.h>
#define MAX_SIZE 5
using namespace std;
template<class T>
T getSearch(T x[], T element) {
    int i;

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << x[i];
    }
    for (i = 0; i < MAX_SIZE; i++) {
        if (x[i] == element) {
            cout << "\nFunction Template : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == MAX_SIZE)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}

int main() {

    int arr_search[MAX_SIZE], i, element;
    float f_arr_search[MAX_SIZE], f_element;

    cout << "Simple Function Template Array Program Example : Search Number\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Searching Int : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_search[i];

    cout << "\nEnter Element to Search (Int) : ";
    cin>>element;

    getSearch(arr_search, element);

    cout << "\nEnter " << MAX_SIZE << " Elements for Searching Float : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> f_arr_search[i];

    cout << "\nEnter Element to Search (Float) : ";
    cin>>f_element;
    getSearch(f_arr_search, f_element);
    return 0;
}