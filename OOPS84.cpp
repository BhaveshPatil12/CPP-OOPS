#include<iostream>
using namespace std;
class Array {
 private:
  int arr[10];
 public:
  void getArray() {
    for (int index = 0; index < 10; index++) {
      cout << "[" << index << "]: ";
      cin >> arr[index];
    }
  }
  void searchNumber() {
    int number, index, count = 0;
    cout << "\nEnter Number you want to search: ";
    cin >> number;
    for (index = 0; index < 10; index++) {
      if (number == arr[index]) {
        count++;
        break;
      } else {
        count = 0;
      }
    }

    if (count != 0) {
      cout << "\nNumber is present!" << endl;
    } else {
      cout << "\nNumber is not present!" << endl;
    }
  }
};

int main() 
{
  Array A;
  A.getArray();
  A.searchNumber();
  return 0;
}
