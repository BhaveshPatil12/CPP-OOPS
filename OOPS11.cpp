#include<iostream>
using namespace std;
class Perfect {
  private:
    int start, end;
  public:
    void getRange() {
      cout << "Enter Range:";
      cin >> start >> end;
    }
  void isPerfect() { 
    int index_1, index_2 = 1, sum;
    cout << "Perfect Numbers in the range " << start << " to " << end << " are " << endl;
    for (index_1 = start; index_1 <= end; index_1++) {
      sum = 0;
      for (index_2 = 1; index_2 < index_1; index_2++) {
        if (index_1 % index_2 == 0) {
          sum = sum + index_2;
        }
      }
      if (index_1 == sum) {
        cout << index_1 << " ";
      }
    }
  }
};

int main()
{
  Perfect P;
  P.getRange();
  P.isPerfect();
  return 0;
}
