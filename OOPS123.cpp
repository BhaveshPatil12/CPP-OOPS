#include<bits/stdc++.h>
using namespace std;
class Array {
 private:
  int arr[10];
 public:
  void getArray() {
    cout << "Enter Array Elements :" << endl;
    for (int index = 0; index < 10; index++) {
      cout << "[" << index << "]: ";
      cin >> arr[index];
    }
  }
  void occuranceArray() {
    int index_1, index_2, count;
    vector<bool> visited(10, false);
    cout << "\nTotal Occurrences of each Element in Array :" << endl;
    for (index_1 = 0; index_1 < 10; index_1++) {
      if (visited[index_1] == true) continue;
      count = 1;
      for (index_2 = index_1 + 1; index_2 < 10; index_2++) {
        if (arr[index_1] == arr[index_2]) {
          visited[index_2] = true;
          count++;
        }
      }
      cout << arr[index_1] << " occurred " << count << " time" << endl;
    }
  }
};
int main() {
  Array A;
  A.getArray();
  A.occuranceArray();
  return 0;
}